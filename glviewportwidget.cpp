#include "glviewportwidget.h"
#include "ui_mainwindow.h"

// Big thanks to Anton Gerdelan's article https://antongerdelan.net/opengl/hellotriangle.html
// and learnopengl.com to help with the setup

// static to keep these globals in this file only
static constexpr float quadVertices[] = {
    // positions         // texture coords
    1.0f,  1.0f, 0.0f,   1.0f, 1.0f, // top right
    1.0f, -1.0f, 0.0f,   1.0f, 0.0f, // bottom right
    -1.0f, -1.0f, 0.0f,   0.0f, 0.0f, // bottom left
    -1.0f,  1.0f, 0.0f,   0.0f, 1.0f  // top left
};

static constexpr unsigned int indices[] = {
    0, 1, 3,  // first triangle
    1, 2, 3   // second triangle
};

void GLViewportWidget::initializeGL()
{
    initializeOpenGLFunctions();
    glEnable(GL_TEXTURE_2D);

    // Geometry for Qt widget, NOT OpenGL-related
    this->setGeometry(320, 170, 1280, 720);

    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    
    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(quadVertices), quadVertices, GL_STATIC_DRAW);

    glGenBuffers(1, &ebo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    // position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    // texture coord attribute
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
}

void GLViewportWidget::paintGL()
{
    if (workingImage.isNull())
    {
        glClearColor(0.51f, 0.f, 0.81f, 1);
        glClear(GL_COLOR_BUFFER_BIT);
    }
    else
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, glWorkingImage);

        // glTexImage2D MUST be called before quad is drawn!
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, workingImage.width(), workingImage.height(),
                     0, GL_RGB, GL_UNSIGNED_BYTE, workingImage.bits());

        glUseProgram(shaderProgram);
        glUniform1i(glGetUniformLocation(shaderProgram, "glWorkingImage"), 0);
        glUniform1f(glGetUniformLocation(shaderProgram, "adjBrightnessFactor"), uniforms.BrightnessFactor);
        glUniform1f(glGetUniformLocation(shaderProgram, "adjContrastFactor"), uniforms.ContrastFactor);

        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        // set back to 0
        //glBindTexture(GL_TEXTURE_2D, 0);
        //glUseProgram(0);
    }
}

void GLViewportWidget::setImage(QImage pic)
{
    workingImage = pic.convertToFormat(QImage::Format_RGB888);
    workingImage.mirror(false, true);

    makeCurrent();

    vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);

    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);

    shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    glGenTextures(1, &glWorkingImage);
    glActiveTexture(GL_TEXTURE0);

    glBindTexture(GL_TEXTURE_2D, glWorkingImage);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_MIRRORED_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_MIRRORED_REPEAT);

    doneCurrent();
}

void GLViewportWidget::callPaintWithValue(int newVal, EAdjustment adj)
{
    switch (adj)
    {
        case Brightness:
            uniforms.BrightnessFactor = ((float)newVal / MaxSliderValue);
            break;
        case Contrast:
            uniforms.ContrastFactor = ((float)newVal / MaxSliderValue);
            break;
        case Hue:
            uniforms.HueFactor = ((float)newVal / MaxSliderValue);
            break;
        case Saturation:
            uniforms.SaturationFactor = ((float)newVal / MaxSliderValue);
            break;
        case BumpShadows:
            uniforms.BumpShadowFactor = ((float)newVal / MaxSliderValue);
            break;
        case Vignette:
            uniforms.VignetteFactor = ((float)newVal / MaxSliderValue);
            break;
    }        
    
    // After correct uniform is updated, paint with it
    makeCurrent();
    paintGL();
    doneCurrent();
}

// TODO: Set resizing properties for viewport, and based on image size/UI positions
// Also, make sure the GL quad AND viewport->setGeometry() adapts to size adjustments
void GLViewportWidget::resizeGL(int width, int height)
{
    glViewport(0, 0, width, height);
}

#if 0
GLViewportWidget::~GLViewportWidget()
{

}
#endif