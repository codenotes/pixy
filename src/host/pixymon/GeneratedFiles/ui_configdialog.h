/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *pixyTab;
    QGridLayout *gridLayout_5;
    QGridLayout *pixyLayout;
    QWidget *pixymonTab;
    QGridLayout *gridLayout_4;
    QGridLayout *pixymonLayout;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QStringLiteral("ConfigDialog"));
        ConfigDialog->resize(589, 305);
        gridLayout_2 = new QGridLayout(ConfigDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buttonBox = new QDialogButtonBox(ConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(ConfigDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        pixyTab = new QWidget();
        pixyTab->setObjectName(QStringLiteral("pixyTab"));
        gridLayout_5 = new QGridLayout(pixyTab);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pixyLayout = new QGridLayout();
        pixyLayout->setObjectName(QStringLiteral("pixyLayout"));

        gridLayout_5->addLayout(pixyLayout, 0, 0, 1, 1);

        tabWidget->addTab(pixyTab, QString());
        pixymonTab = new QWidget();
        pixymonTab->setObjectName(QStringLiteral("pixymonTab"));
        gridLayout_4 = new QGridLayout(pixymonTab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pixymonLayout = new QGridLayout();
        pixymonLayout->setObjectName(QStringLiteral("pixymonLayout"));

        gridLayout_4->addLayout(pixymonLayout, 0, 0, 1, 1);

        tabWidget->addTab(pixymonTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QApplication::translate("ConfigDialog", "Configure", 0));
        tabWidget->setTabText(tabWidget->indexOf(pixyTab), QApplication::translate("ConfigDialog", "Pixy Parameters (saved on Pixy)", 0));
        tabWidget->setTabText(tabWidget->indexOf(pixymonTab), QApplication::translate("ConfigDialog", "PixyMon Parameters (saved on computer)", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
