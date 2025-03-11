/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave_Image;
    QAction *actionSave_Image_As;
    QWidget *centralwidget;
    QDockWidget *ToolInspector;
    QWidget *dockWidgetContents_2;
    QStackedWidget *InspectorPages;
    QWidget *BlankPage;
    QWidget *BrightnessPage;
    QSlider *BrightnessSlider;
    QLabel *BrightnessLabel;
    QWidget *ContrastPage;
    QSlider *LowtonesSlider;
    QLabel *ContrastLabel;
    QCheckBox *EnhancePrecisCheck;
    QLabel *BumpLowtonesLabel;
    QFrame *line;
    QFrame *line_2;
    QLabel *BumpMidtonesLabel;
    QSlider *MidtonesSlider;
    QSlider *HightonesSlider;
    QLabel *BumpHightonesLabel;
    QWidget *HSVScalesPage;
    QWidget *ShadowsPage;
    QWidget *HDRPage;
    QMenuBar *MenuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QDockWidget *ToolSelector;
    QWidget *dockWidgetContents;
    QFrame *ToolSelectorBasic;
    QPushButton *BrightnessButton;
    QPushButton *ContrastButton;
    QPushButton *ShadowsButton;
    QPushButton *HSVSlidersButton;
    QLabel *BasicToolsLabel;
    QFrame *ToolSelectorArtistic;
    QPushButton *VignetteButton;
    QPushButton *GuassianBlurButton;
    QPushButton *PixelateButton;
    QLabel *ArtisticToolsLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        MainWindow->setBaseSize(QSize(300, 1037));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(10);
        font.setBold(false);
        font.setUnderline(false);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        actionOpen->setIcon(icon);
        actionSave_Image = new QAction(MainWindow);
        actionSave_Image->setObjectName("actionSave_Image");
        actionSave_Image_As = new QAction(MainWindow);
        actionSave_Image_As->setObjectName("actionSave_Image_As");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        ToolInspector = new QDockWidget(MainWindow);
        ToolInspector->setObjectName("ToolInspector");
        ToolInspector->setMinimumSize(QSize(300, 1037));
        ToolInspector->setBaseSize(QSize(300, 1037));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tahoma")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(false);
        ToolInspector->setFont(font1);
        ToolInspector->setAutoFillBackground(false);
        ToolInspector->setFeatures(QDockWidget::DockWidgetFeature::NoDockWidgetFeatures);
        ToolInspector->setAllowedAreas(Qt::DockWidgetArea::RightDockWidgetArea);
        ToolInspector->setWindowTitle(QString::fromUtf8("Inspector"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName("dockWidgetContents_2");
        InspectorPages = new QStackedWidget(dockWidgetContents_2);
        InspectorPages->setObjectName("InspectorPages");
        InspectorPages->setGeometry(QRect(0, 0, 301, 1021));
#if QT_CONFIG(accessibility)
        InspectorPages->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        InspectorPages->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        InspectorPages->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        InspectorPages->setAutoFillBackground(false);
        InspectorPages->setFrameShape(QFrame::Shape::NoFrame);
        InspectorPages->setLineWidth(2);
        BlankPage = new QWidget();
        BlankPage->setObjectName("BlankPage");
        InspectorPages->addWidget(BlankPage);
        BrightnessPage = new QWidget();
        BrightnessPage->setObjectName("BrightnessPage");
        BrightnessSlider = new QSlider(BrightnessPage);
        BrightnessSlider->setObjectName("BrightnessSlider");
        BrightnessSlider->setGeometry(QRect(10, 170, 191, 16));
        QPalette palette;
        QBrush brush(QColor(123, 3, 195, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        BrightnessSlider->setPalette(palette);
        BrightnessSlider->setCursor(QCursor(Qt::CursorShape::SizeHorCursor));
        BrightnessSlider->setMinimum(-50);
        BrightnessSlider->setMaximum(50);
        BrightnessSlider->setValue(0);
        BrightnessSlider->setOrientation(Qt::Orientation::Horizontal);
        BrightnessSlider->setInvertedAppearance(true);
        BrightnessSlider->setInvertedControls(false);
        BrightnessSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        BrightnessSlider->setTickInterval(5);
        BrightnessLabel = new QLabel(BrightnessPage);
        BrightnessLabel->setObjectName("BrightnessLabel");
        BrightnessLabel->setGeometry(QRect(10, 143, 121, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tahoma")});
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setUnderline(false);
        BrightnessLabel->setFont(font2);
        InspectorPages->addWidget(BrightnessPage);
        ContrastPage = new QWidget();
        ContrastPage->setObjectName("ContrastPage");
        LowtonesSlider = new QSlider(ContrastPage);
        LowtonesSlider->setObjectName("LowtonesSlider");
        LowtonesSlider->setGeometry(QRect(10, 170, 191, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        LowtonesSlider->setPalette(palette1);
        LowtonesSlider->setCursor(QCursor(Qt::CursorShape::SizeHorCursor));
        LowtonesSlider->setMinimum(-50);
        LowtonesSlider->setMaximum(50);
        LowtonesSlider->setValue(0);
        LowtonesSlider->setOrientation(Qt::Orientation::Horizontal);
        LowtonesSlider->setInvertedAppearance(true);
        LowtonesSlider->setInvertedControls(false);
        LowtonesSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        LowtonesSlider->setTickInterval(5);
        ContrastLabel = new QLabel(ContrastPage);
        ContrastLabel->setObjectName("ContrastLabel");
        ContrastLabel->setGeometry(QRect(120, 30, 71, 16));
        ContrastLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        EnhancePrecisCheck = new QCheckBox(ContrastPage);
        EnhancePrecisCheck->setObjectName("EnhancePrecisCheck");
        EnhancePrecisCheck->setGeometry(QRect(70, 60, 161, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        EnhancePrecisCheck->setPalette(palette2);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tahoma")});
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setUnderline(false);
        EnhancePrecisCheck->setFont(font3);
        EnhancePrecisCheck->setIconSize(QSize(16, 16));
        EnhancePrecisCheck->setTristate(false);
        BumpLowtonesLabel = new QLabel(ContrastPage);
        BumpLowtonesLabel->setObjectName("BumpLowtonesLabel");
        BumpLowtonesLabel->setGeometry(QRect(10, 143, 121, 21));
        BumpLowtonesLabel->setFont(font2);
        line = new QFrame(ContrastPage);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 320, 261, 16));
        line->setFrameShadow(QFrame::Shadow::Raised);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::Shape::HLine);
        line_2 = new QFrame(ContrastPage);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 220, 261, 16));
        line_2->setFrameShadow(QFrame::Shadow::Raised);
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::Shape::HLine);
        BumpMidtonesLabel = new QLabel(ContrastPage);
        BumpMidtonesLabel->setObjectName("BumpMidtonesLabel");
        BumpMidtonesLabel->setGeometry(QRect(10, 250, 121, 21));
        BumpMidtonesLabel->setFont(font2);
        MidtonesSlider = new QSlider(ContrastPage);
        MidtonesSlider->setObjectName("MidtonesSlider");
        MidtonesSlider->setGeometry(QRect(10, 277, 191, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        MidtonesSlider->setPalette(palette3);
        MidtonesSlider->setCursor(QCursor(Qt::CursorShape::SizeHorCursor));
        MidtonesSlider->setMinimum(-50);
        MidtonesSlider->setMaximum(50);
        MidtonesSlider->setValue(0);
        MidtonesSlider->setOrientation(Qt::Orientation::Horizontal);
        MidtonesSlider->setInvertedAppearance(true);
        MidtonesSlider->setInvertedControls(false);
        MidtonesSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        MidtonesSlider->setTickInterval(5);
        HightonesSlider = new QSlider(ContrastPage);
        HightonesSlider->setObjectName("HightonesSlider");
        HightonesSlider->setGeometry(QRect(10, 387, 191, 16));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        HightonesSlider->setPalette(palette4);
        HightonesSlider->setCursor(QCursor(Qt::CursorShape::SizeHorCursor));
        HightonesSlider->setMinimum(-50);
        HightonesSlider->setMaximum(50);
        HightonesSlider->setValue(0);
        HightonesSlider->setOrientation(Qt::Orientation::Horizontal);
        HightonesSlider->setInvertedAppearance(true);
        HightonesSlider->setInvertedControls(false);
        HightonesSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        HightonesSlider->setTickInterval(5);
        BumpHightonesLabel = new QLabel(ContrastPage);
        BumpHightonesLabel->setObjectName("BumpHightonesLabel");
        BumpHightonesLabel->setGeometry(QRect(10, 360, 121, 21));
        BumpHightonesLabel->setFont(font2);
        InspectorPages->addWidget(ContrastPage);
        HSVScalesPage = new QWidget();
        HSVScalesPage->setObjectName("HSVScalesPage");
        InspectorPages->addWidget(HSVScalesPage);
        ShadowsPage = new QWidget();
        ShadowsPage->setObjectName("ShadowsPage");
        InspectorPages->addWidget(ShadowsPage);
        HDRPage = new QWidget();
        HDRPage->setObjectName("HDRPage");
        InspectorPages->addWidget(HDRPage);
        ToolInspector->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::DockWidgetArea::RightDockWidgetArea, ToolInspector);
        MenuBar = new QMenuBar(MainWindow);
        MenuBar->setObjectName("MenuBar");
        MenuBar->setGeometry(QRect(0, 0, 1920, 35));
        MenuBar->setMinimumSize(QSize(1920, 35));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Tahoma")});
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setUnderline(false);
        MenuBar->setFont(font4);
        MenuBar->setStyleSheet(QString::fromUtf8(""));
        MenuBar->setDefaultUp(false);
        menuFile = new QMenu(MenuBar);
        menuFile->setObjectName("menuFile");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setUnderline(false);
        menuFile->setFont(font5);
        menuAbout = new QMenu(MenuBar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(MenuBar);
        ToolSelector = new QDockWidget(MainWindow);
        ToolSelector->setObjectName("ToolSelector");
        ToolSelector->setMinimumSize(QSize(300, 1037));
        ToolSelector->setBaseSize(QSize(302, 1037));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Tahoma")});
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setUnderline(false);
        ToolSelector->setFont(font6);
        ToolSelector->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        ToolSelector->setAutoFillBackground(false);
        ToolSelector->setFeatures(QDockWidget::DockWidgetFeature::NoDockWidgetFeatures);
        ToolSelector->setAllowedAreas(Qt::DockWidgetArea::LeftDockWidgetArea);
        ToolSelector->setWindowTitle(QString::fromUtf8("Tool Selector"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        ToolSelectorBasic = new QFrame(dockWidgetContents);
        ToolSelectorBasic->setObjectName("ToolSelectorBasic");
        ToolSelectorBasic->setGeometry(QRect(10, 30, 281, 131));
        ToolSelectorBasic->setStyleSheet(QString::fromUtf8(""));
        ToolSelectorBasic->setFrameShape(QFrame::Shape::StyledPanel);
        ToolSelectorBasic->setFrameShadow(QFrame::Shadow::Plain);
        ToolSelectorBasic->setLineWidth(4);
        BrightnessButton = new QPushButton(ToolSelectorBasic);
        BrightnessButton->setObjectName("BrightnessButton");
        BrightnessButton->setGeometry(QRect(31, 40, 101, 31));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Tahoma")});
        font7.setPointSize(12);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setUnderline(false);
        BrightnessButton->setFont(font7);
        BrightnessButton->setStyleSheet(QString::fromUtf8("border-color: rgb(125, 0, 188);"));
        BrightnessButton->setFlat(false);
        ContrastButton = new QPushButton(ToolSelectorBasic);
        ContrastButton->setObjectName("ContrastButton");
        ContrastButton->setGeometry(QRect(160, 40, 101, 31));
        ContrastButton->setFont(font7);
        ShadowsButton = new QPushButton(ToolSelectorBasic);
        ShadowsButton->setObjectName("ShadowsButton");
        ShadowsButton->setGeometry(QRect(31, 90, 101, 31));
        ShadowsButton->setFont(font7);
        HSVSlidersButton = new QPushButton(ToolSelectorBasic);
        HSVSlidersButton->setObjectName("HSVSlidersButton");
        HSVSlidersButton->setGeometry(QRect(160, 90, 101, 31));
        HSVSlidersButton->setFont(font7);
        BasicToolsLabel = new QLabel(ToolSelectorBasic);
        BasicToolsLabel->setObjectName("BasicToolsLabel");
        BasicToolsLabel->setGeometry(QRect(90, 10, 101, 21));
        BasicToolsLabel->setFont(font4);
        ToolSelectorArtistic = new QFrame(dockWidgetContents);
        ToolSelectorArtistic->setObjectName("ToolSelectorArtistic");
        ToolSelectorArtistic->setGeometry(QRect(10, 220, 281, 131));
        ToolSelectorArtistic->setStyleSheet(QString::fromUtf8("QFrame#ToolSelectorFrameOne{border-color: rgb(108, 0, 162);}"));
        ToolSelectorArtistic->setFrameShape(QFrame::Shape::StyledPanel);
        ToolSelectorArtistic->setFrameShadow(QFrame::Shadow::Plain);
        ToolSelectorArtistic->setLineWidth(4);
        VignetteButton = new QPushButton(ToolSelectorArtistic);
        VignetteButton->setObjectName("VignetteButton");
        VignetteButton->setGeometry(QRect(31, 40, 101, 31));
        VignetteButton->setFont(font7);
        VignetteButton->setStyleSheet(QString::fromUtf8("border-color: rgb(125, 0, 188);"));
        VignetteButton->setFlat(false);
        GuassianBlurButton = new QPushButton(ToolSelectorArtistic);
        GuassianBlurButton->setObjectName("GuassianBlurButton");
        GuassianBlurButton->setGeometry(QRect(160, 40, 101, 31));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Tahoma")});
        font8.setPointSize(11);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setUnderline(false);
        GuassianBlurButton->setFont(font8);
        PixelateButton = new QPushButton(ToolSelectorArtistic);
        PixelateButton->setObjectName("PixelateButton");
        PixelateButton->setGeometry(QRect(31, 90, 101, 31));
        PixelateButton->setFont(font7);
        ArtisticToolsLabel = new QLabel(ToolSelectorArtistic);
        ArtisticToolsLabel->setObjectName("ArtisticToolsLabel");
        ArtisticToolsLabel->setGeometry(QRect(90, 10, 121, 21));
        ArtisticToolsLabel->setFont(font4);
        ToolSelector->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, ToolSelector);

        MenuBar->addAction(menuFile->menuAction());
        MenuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_Image);
        menuFile->addAction(actionSave_Image_As);

        retranslateUi(MainWindow);

        InspectorPages->setCurrentIndex(1);
        BrightnessButton->setDefault(false);
        VignetteButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Postman: A Post Processing Playground", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open Image", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Open the image to edit</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_Image->setText(QCoreApplication::translate("MainWindow", "Save Image", nullptr));
        actionSave_Image_As->setText(QCoreApplication::translate("MainWindow", "Save Image As", nullptr));
        BrightnessLabel->setText(QCoreApplication::translate("MainWindow", "Brightness", nullptr));
        ContrastLabel->setText(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
#if QT_CONFIG(tooltip)
        EnhancePrecisCheck->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        EnhancePrecisCheck->setText(QCoreApplication::translate("MainWindow", "Enhanced Precision", nullptr));
        BumpLowtonesLabel->setText(QCoreApplication::translate("MainWindow", "Bump Lowtones", nullptr));
        BumpMidtonesLabel->setText(QCoreApplication::translate("MainWindow", "Bump Midtones", nullptr));
        BumpHightonesLabel->setText(QCoreApplication::translate("MainWindow", "Bump Hightones", nullptr));
        menuFile->setWindowTitle(QCoreApplication::translate("MainWindow", "Postal: Post Process Playground", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        BrightnessButton->setText(QCoreApplication::translate("MainWindow", "Brightness", nullptr));
        ContrastButton->setText(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
        ShadowsButton->setText(QCoreApplication::translate("MainWindow", "Shadows", nullptr));
        HSVSlidersButton->setText(QCoreApplication::translate("MainWindow", "HSV Sliders", nullptr));
        BasicToolsLabel->setText(QCoreApplication::translate("MainWindow", "Basic Tools", nullptr));
        VignetteButton->setText(QCoreApplication::translate("MainWindow", "Vignette", nullptr));
        GuassianBlurButton->setText(QCoreApplication::translate("MainWindow", "Guassian Blur", nullptr));
        PixelateButton->setText(QCoreApplication::translate("MainWindow", "Pixelate", nullptr));
        ArtisticToolsLabel->setText(QCoreApplication::translate("MainWindow", "Artistic Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
