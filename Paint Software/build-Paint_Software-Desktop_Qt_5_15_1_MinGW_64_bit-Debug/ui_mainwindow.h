/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionSize;
    QAction *actionColor;
    QAction *actionNew;
    QAction *actionAbout_Us;
    QAction *actionContact_Us;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuyiui;
    QMenu *menuOption;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/196290.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/185-1856543_button-outline-clip-art-exit-icon-png-orange.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionSize = new QAction(MainWindow);
        actionSize->setObjectName(QString::fromUtf8("actionSize"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/tool-brush-drawing-512.webp"), QSize(), QIcon::Normal, QIcon::Off);
        actionSize->setIcon(icon2);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/Teal_Blue_Circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon3);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon4);
        actionAbout_Us = new QAction(MainWindow);
        actionAbout_Us->setObjectName(QString::fromUtf8("actionAbout_Us"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/about-us-logo-png-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Us->setIcon(icon5);
        actionContact_Us = new QAction(MainWindow);
        actionContact_Us->setObjectName(QString::fromUtf8("actionContact_Us"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/about-us-logo-png-6.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionContact_Us->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        menubar->setFont(font);
        menubar->setStyleSheet(QString::fromUtf8("background: #262626;\n"
"color:white;"));
        menuyiui = new QMenu(menubar);
        menuyiui->setObjectName(QString::fromUtf8("menuyiui"));
        menuOption = new QMenu(menubar);
        menuOption->setObjectName(QString::fromUtf8("menuOption"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuyiui->menuAction());
        menubar->addAction(menuOption->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuyiui->addAction(actionNew);
        menuyiui->addAction(actionExit);
        menuOption->addAction(actionSize);
        menuOption->addAction(actionColor);
        menuHelp->addAction(actionAbout_Us);
        menuHelp->addAction(actionContact_Us);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Baby Paint", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionSize->setText(QCoreApplication::translate("MainWindow", "Size ", nullptr));
        actionColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New ", nullptr));
        actionAbout_Us->setText(QCoreApplication::translate("MainWindow", "About Us", nullptr));
        actionContact_Us->setText(QCoreApplication::translate("MainWindow", "Contact Us", nullptr));
        menuyiui->setTitle(QCoreApplication::translate("MainWindow", "File ", nullptr));
        menuOption->setTitle(QCoreApplication::translate("MainWindow", "Option ", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
