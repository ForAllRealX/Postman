#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "glviewportwidget.h"
#include <QMainWindow>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>
#include <QtOpenGLWidgets/QtOpenGLWidgets>
#include <QtOpenGL>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();
    void on_BrightnessButton_clicked();
    void on_ContrastButton_clicked();
    void on_BrightnessSlider_valueChanged(int value);

private:
    Ui::MainWindow* ui;
    GLViewportWidget viewport;

};

#endif // MAINWINDOW_H
