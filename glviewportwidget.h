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
    // TODO: Probably zero initialize variables in ctor
    GLViewportWidget(QWidget* parent)
        : QOpenGLWidget(parent)
    {
    }

    ~GLViewportWidget()
    {
    }

    enum EAdjustment
    {
        Brightness = 0,
        Contrast,
        Hue,
        Saturation,
        BumpShadows,
        Vignette
    };

    void setImage(QImage pic);
    void callPaintWithValue(int newVal, EAdjustment adj );

protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int width, int height) override;

private:
    // The image opened by the user, and being edited
    QImage workingImage;

    // The GL buffer for workingImage
    GLuint glWorkingImage;

    // The *normalized* slider values that get passed into fragment shader uniforms
    // Values between [-1,1]
    struct SShaderUniforms
    {
        float BrightnessFactor = 0;
        float ContrastFactor = 0;
        float HueFactor = 0;
        float SaturationFactor = 0;
        float BumpShadowFactor = 0;
        float VignetteFactor = 0;
    } uniforms;

    GLuint vertexShader;
    GLuint fragmentShader;
    GLuint shaderProgram;

    unsigned int vbo;
    unsigned int vao;
    unsigned int ebo;
    
    GLenum errorCode = 0; // errorCode = glGetError();
    const int MaxSliderValue = 50;

    const char* vertexShaderSource =
        "#version 450 core\n"

        "layout (location = 0) in vec3 inVertPos;"
        "layout (location = 1) in vec2 inTexCoords;"

        "out vec2 outTexCoords;"
        "void main()"
        "{"
            "gl_Position = vec4(inVertPos, 1.0);"
            "outTexCoords = inTexCoords;"
        "}";

    const char* fragmentShaderSource =
        "#version 450 core\n"

        "in vec2 outTexCoords;"
        "out vec4 fragColor;"

        "uniform sampler2D glImage;"
        "uniform float adjBrightnessFactor;"

        "void main()"
        "{"
            "fragColor = texture2D(glImage, outTexCoords.xy) + (-1 * adjBrightnessFactor);"
        "}";
};
#endif // GLVIEWPORTWIDGET_H