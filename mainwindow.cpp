#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "glviewportwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , viewport(this)
{
    ui->setupUi(this);
    ui->InspectorPages->setCurrentIndex(0);

    // Apply custom CSS styles here, since the styleSheet editor in
    // Qt Designer isn't respecting many wanted adjustments.

    ui->MenuBar->setStyleSheet("QMenuBar#MenuBar {"
                               "background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.48, y2:0.999727, "
                               "stop:0 rgba(133, 0, 213, 255), stop : 0.64 rgba(0, 0, 0, 0)); "
                               "border: 1px;"
                               "border-bottom-color: #8a00d5;"
                               "border-bottom-style: solid;}");

    ui->ToolSelector->setStyleSheet("QDockWidget > QWidget {"
                                    "border: 2px solid #8a00d5;"
                                    "border-radius: 8px;} "
                                    "::title { position: relative; padding-left: 100px;"
                                    "text-align: left center }");

    ui->ToolInspector->setStyleSheet("QDockWidget > QWidget {"
                                     "border: 2px solid #8a00d5;"
                                     "border-radius: 8px;} "
                                     "::title { position: relative; padding-left: 100px;"
                                     "text-align: left center }");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    const QString& defaultDirectory = "C:\\Users\\tisgd\\Pictures\\Postman";

    QFileDialog picDialog;
    picDialog.setFileMode(QFileDialog::ExistingFile);

    //TODO: CHECK FOR REASONABLENESS ON PROPERTIES LIKE RESOLUTION AND FILE SIZE
    QImageReader openPicture{ picDialog.getOpenFileName(this, nullptr,
                                                       defaultDirectory, tr("*.jpeg, *.jpg, *.png")) };

    QImage picture(openPicture.fileName());

    if (!picture.isNull())
        viewport.setImage(picture);
    // else log or return error
}

void MainWindow::on_BrightnessButton_clicked()
{
    ui->InspectorPages->setCurrentIndex(1);
}

void MainWindow::on_ContrastButton_clicked()
{
    ui->InspectorPages->setCurrentIndex(2);
}

void MainWindow::on_BrightnessSlider_valueChanged(int val)
{
   viewport.callPaintWithValue(ui->BrightnessSlider->value(), viewport.Brightness);
}
