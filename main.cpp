#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QSurfaceFormat format;
    format.setRedBufferSize(8);
    format.setGreenBufferSize(8);
    format.setBlueBufferSize(8);
    format.setVersion(5,3);
    format.setProfile(QSurfaceFormat::OpenGLContextProfile::CoreProfile);
    format.setRenderableType(QSurfaceFormat::RenderableType::OpenGL);
    format.setColorSpace(QColorSpace::SRgb);
    //format.setSwapBehavior(QSurfaceFormat::SwapBehavior::DoubleBuffer);
    //format.setSwapInterval(1);
    QSurfaceFormat::setDefaultFormat(format);

    QCoreApplication::setAttribute(Qt::ApplicationAttribute::AA_ShareOpenGLContexts, true);
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
