/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionSave_Image;
    QAction *actionPlay_Pause;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionConfigure;
    QAction *actionProgram;
    QAction *actionRaw_video;
    QAction *actionCooked_video;
    QAction *actionDefault_program;
    QAction *actionSave_Pixy_parameters;
    QAction *actionLoad_Pixy_parameters;
    QAction *actionCamera_1;
    QAction *actionCamera2;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *imageLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuAction;
    QMenu *menuCam_Select;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(677, 626);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSave_Image = new QAction(MainWindow);
        actionSave_Image->setObjectName(QStringLiteral("actionSave_Image"));
        actionSave_Image->setEnabled(true);
        actionPlay_Pause = new QAction(MainWindow);
        actionPlay_Pause->setObjectName(QStringLiteral("actionPlay_Pause"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionHelp->setEnabled(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QStringLiteral("actionConfigure"));
        actionProgram = new QAction(MainWindow);
        actionProgram->setObjectName(QStringLiteral("actionProgram"));
        actionRaw_video = new QAction(MainWindow);
        actionRaw_video->setObjectName(QStringLiteral("actionRaw_video"));
        actionCooked_video = new QAction(MainWindow);
        actionCooked_video->setObjectName(QStringLiteral("actionCooked_video"));
        actionDefault_program = new QAction(MainWindow);
        actionDefault_program->setObjectName(QStringLiteral("actionDefault_program"));
        actionSave_Pixy_parameters = new QAction(MainWindow);
        actionSave_Pixy_parameters->setObjectName(QStringLiteral("actionSave_Pixy_parameters"));
        actionLoad_Pixy_parameters = new QAction(MainWindow);
        actionLoad_Pixy_parameters->setObjectName(QStringLiteral("actionLoad_Pixy_parameters"));
        actionCamera_1 = new QAction(MainWindow);
        actionCamera_1->setObjectName(QStringLiteral("actionCamera_1"));
        actionCamera2 = new QAction(MainWindow);
        actionCamera2->setObjectName(QStringLiteral("actionCamera2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        imageLayout = new QGridLayout();
        imageLayout->setSpacing(6);
        imageLayout->setObjectName(QStringLiteral("imageLayout"));

        gridLayout->addLayout(imageLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 677, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuAction = new QMenu(menuBar);
        menuAction->setObjectName(QStringLiteral("menuAction"));
        menuCam_Select = new QMenu(menuBar);
        menuCam_Select->setObjectName(QStringLiteral("menuCam_Select"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAction->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuCam_Select->menuAction());
        menuFile->addAction(actionConfigure);
        menuFile->addAction(actionSave_Pixy_parameters);
        menuFile->addAction(actionLoad_Pixy_parameters);
        menuFile->addAction(actionSave_Image);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuAction->addAction(actionPlay_Pause);
        menuAction->addAction(actionDefault_program);
        menuAction->addAction(actionRaw_video);
        menuAction->addAction(actionCooked_video);
        menuCam_Select->addAction(actionCamera_1);
        menuCam_Select->addAction(actionCamera2);

        retranslateUi(MainWindow);
        QObject::connect(actionCamera2, SIGNAL(triggered()), actionCamera2, SLOT(trigger()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionSave_Image->setText(QApplication::translate("MainWindow", "Save Image", 0));
        actionPlay_Pause->setText(QApplication::translate("MainWindow", "Run/Stop", 0));
#ifndef QT_NO_TOOLTIP
        actionPlay_Pause->setToolTip(QApplication::translate("MainWindow", "Run/stop", 0));
#endif // QT_NO_TOOLTIP
        actionHelp->setText(QApplication::translate("MainWindow", "Help...", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About...", 0));
        actionConfigure->setText(QApplication::translate("MainWindow", "Configure...", 0));
#ifndef QT_NO_TOOLTIP
        actionConfigure->setToolTip(QApplication::translate("MainWindow", "Configure parameters", 0));
#endif // QT_NO_TOOLTIP
        actionProgram->setText(QApplication::translate("MainWindow", "Program...", 0));
        actionRaw_video->setText(QApplication::translate("MainWindow", "Raw video", 0));
#ifndef QT_NO_TOOLTIP
        actionRaw_video->setToolTip(QApplication::translate("MainWindow", "Display raw video", 0));
#endif // QT_NO_TOOLTIP
        actionCooked_video->setText(QApplication::translate("MainWindow", "Cooked video", 0));
#ifndef QT_NO_TOOLTIP
        actionCooked_video->setToolTip(QApplication::translate("MainWindow", "Display cooked (processed) video", 0));
#endif // QT_NO_TOOLTIP
        actionDefault_program->setText(QApplication::translate("MainWindow", "Default program", 0));
        actionSave_Pixy_parameters->setText(QApplication::translate("MainWindow", "Save Pixy parameters...", 0));
        actionLoad_Pixy_parameters->setText(QApplication::translate("MainWindow", "Load Pixy parameters...", 0));
        actionCamera_1->setText(QApplication::translate("MainWindow", "Camera 1", 0));
        actionCamera2->setText(QApplication::translate("MainWindow", "Camera2", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuAction->setTitle(QApplication::translate("MainWindow", "Action", 0));
        menuCam_Select->setTitle(QApplication::translate("MainWindow", "Cam Select", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
