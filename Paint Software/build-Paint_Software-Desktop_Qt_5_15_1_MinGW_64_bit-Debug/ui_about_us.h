/********************************************************************************
** Form generated from reading UI file 'about_us.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_US_H
#define UI_ABOUT_US_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about_us
{
public:
    QAction *actionExit;
    QAction *actionHome;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *about_us)
    {
        if (about_us->objectName().isEmpty())
            about_us->setObjectName(QString::fromUtf8("about_us"));
        about_us->resize(498, 429);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/196290.png"), QSize(), QIcon::Normal, QIcon::Off);
        about_us->setWindowIcon(icon);
        actionExit = new QAction(about_us);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/185-1856543_button-outline-clip-art-exit-icon-png-orange.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionHome = new QAction(about_us);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        actionHome->setIcon(icon);
        centralwidget = new QWidget(about_us);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 441, 311));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 141, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 141, 31));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 320, 93, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("backgroud: rgb(0, 85, 127);\n"
"border-radius:2px;\n"
"color:white;"));
        about_us->setCentralWidget(centralwidget);
        menubar = new QMenuBar(about_us);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 498, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        about_us->setMenuBar(menubar);
        statusbar = new QStatusBar(about_us);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        about_us->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionHome);
        menuFile->addAction(actionExit);

        retranslateUi(about_us);

        QMetaObject::connectSlotsByName(about_us);
    } // setupUi

    void retranslateUi(QMainWindow *about_us)
    {
        about_us->setWindowTitle(QCoreApplication::translate("about_us", "About Us", nullptr));
        actionExit->setText(QCoreApplication::translate("about_us", "Exit", nullptr));
        actionHome->setText(QCoreApplication::translate("about_us", "Home", nullptr));
        label->setText(QCoreApplication::translate("about_us", "<html><head/><body><p><span style=\" font-family:'Roboto','-apple-system','BlinkMacSystemFont','Arial','sans-serif'; font-size:16px; color:#424242;\">The first version of Baby Paint was introduced by developer<br/>Microsoft with the </span><span style=\" font-family:'Roboto','-apple-system','BlinkMacSystemFont','Arial','sans-serif'; font-size:16px; font-weight:696; color:#424242;\">first version of Windows, Windows 1.0,\302\240</span><span style=\" font-family:'Roboto','-apple-system','BlinkMacSystemFont','Arial','sans-serif'; font-size:16px; color:#424242;\"><br/></span><span style=\" font-family:'Roboto','-apple-system','BlinkMacSystemFont','Arial','sans-serif'; font-size:16px; font-weight:696; color:#424242;\">in 1985</span><span style=\" font-family:'Roboto','-apple-system','BlinkMacSystemFont','Arial','sans-serif'; font-size:16px; color:#424242;\">. It has been included in all the Microsoft Windows<br/>versions since then, including Windows 10. The program<br/>has gone through </span><span style=\" font-f"
                        "amily:'Roboto','-apple-system','BlinkMacSystemFont','Arial','sans-serif'; font-size:16px; font-weight:696; color:#424242;\">various updates over\302\240the years</span><span style=\" font-family:'Roboto','-apple-system','BlinkMacSystemFont','Arial','sans-serif'; font-size:16px; color:#424242;\"> to<br/>include more advanced features as Windows PCs have<br/>developed. The biggest update came with the release of<br/>Windows 7.</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("about_us", "Baby Paint", nullptr));
        label_3->setText(QCoreApplication::translate("about_us", "vs-0089N", nullptr));
        pushButton->setText(QCoreApplication::translate("about_us", "Exit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("about_us", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about_us: public Ui_about_us {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_US_H
