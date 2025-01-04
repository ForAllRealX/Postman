#ifndef GLVIEWPORTWIDGET_H
#define GLVIEWPORTWIDGET_H

#include <QMainWindow>
#include <QtOpenGLWidgets>
#include <QtOpenGL>
#include <qopenglfunctions_4_5_core.h>
#include <QtGui>

class GLViewportWidget : public QOpenGLWidget, protected QOpenGLFunctions_4_5_Core
{
public:
    GLViewportWidget(QWidget* parent)
        : QOpenGLWidget(parent)
    {
    }

    ~GLViewportWidget()
    {
    }

    void setImage(QImage pic);

protected:
    void initializeGL() override;
    // TODO: Set resizing properties for viewport, and based on image size/UI positions
    void resizeGL(int width, int height) override;
    void paintGL() override;

private:
    // The image that is opened by the user.
    // The image being edited.
    QImage workingImage;

    GLuint vertexShader;
    GLuint fragmentShader;
    GLuint shaderProgram;
    GLuint glImage;

    unsigned int vbo;
    unsigned int vao;
    unsigned int ebo;

    GLenum errorCode = 0; // errorCode = glGetError();

    // These two shaders help draw the quad being textured
    const char* vertexShaderSource =
        "#version 460 core\n"

        "layout (location = 0) in vec3 inVertPos;"
        "layout (location = 1) in vec2 inTexCoords;"

        "out vec2 outTexCoords;"
        "void main()"
        "{"
        "gl_Position = vec4(inVertPos, 1.0);"
        "outTexCoords = inTexCoords;"
        "}";

    const char* fragmentShaderSource =
        "#version 460 core\n"

        "in vec2 outTexCoords;"
        "out vec4 fragColor;"

        "uniform sampler2D glImage;"

        "void main()"
        "{"
        "  fragColor = texture2D(glImage, outTexCoords.xy);"
        "}";
};
#endif // GLVIEWPORTWIDGET_H
