/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *picturelabel;
    QSlider *redslider;
    QSlider *greenslider;
    QSlider *blueslider;
    QSlider *hslider;
    QSlider *sslider;
    QSlider *vslider;
    QLabel *redvalue;
    QLabel *greenvalue;
    QLabel *bluevalue;
    QLabel *hvalue;
    QLabel *svalue;
    QLabel *vvalue;
    QLabel *redlabel;
    QLabel *greenlael;
    QLabel *bluelabel;
    QLabel *hlabel;
    QLabel *slabel;
    QLabel *vlabel;
    QPushButton *reset;
    QSlider *medianslider;
    QLabel *medianvalue;
    QLabel *medianlabel;
    QRadioButton *gaussian;
    QRadioButton *box;
    QSlider *bislider;
    QLabel *bivalue;
    QLabel *bilabel;
    QRadioButton *sharpening;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 921);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        picturelabel = new QLabel(centralwidget);
        picturelabel->setObjectName(QString::fromUtf8("picturelabel"));
        picturelabel->setGeometry(QRect(30, 8, 221, 111));
        redslider = new QSlider(centralwidget);
        redslider->setObjectName(QString::fromUtf8("redslider"));
        redslider->setGeometry(QRect(20, 160, 160, 16));
        redslider->setMinimum(-255);
        redslider->setMaximum(255);
        redslider->setOrientation(Qt::Horizontal);
        greenslider = new QSlider(centralwidget);
        greenslider->setObjectName(QString::fromUtf8("greenslider"));
        greenslider->setGeometry(QRect(20, 240, 160, 16));
        greenslider->setMinimum(-256);
        greenslider->setMaximum(255);
        greenslider->setOrientation(Qt::Horizontal);
        blueslider = new QSlider(centralwidget);
        blueslider->setObjectName(QString::fromUtf8("blueslider"));
        blueslider->setGeometry(QRect(20, 310, 160, 16));
        blueslider->setMinimum(-255);
        blueslider->setMaximum(255);
        blueslider->setOrientation(Qt::Horizontal);
        hslider = new QSlider(centralwidget);
        hslider->setObjectName(QString::fromUtf8("hslider"));
        hslider->setGeometry(QRect(20, 380, 160, 16));
        hslider->setMaximum(360);
        hslider->setOrientation(Qt::Horizontal);
        sslider = new QSlider(centralwidget);
        sslider->setObjectName(QString::fromUtf8("sslider"));
        sslider->setGeometry(QRect(20, 450, 160, 16));
        sslider->setMaximum(100);
        sslider->setOrientation(Qt::Horizontal);
        vslider = new QSlider(centralwidget);
        vslider->setObjectName(QString::fromUtf8("vslider"));
        vslider->setGeometry(QRect(20, 530, 160, 16));
        vslider->setMaximum(100);
        vslider->setOrientation(Qt::Horizontal);
        redvalue = new QLabel(centralwidget);
        redvalue->setObjectName(QString::fromUtf8("redvalue"));
        redvalue->setGeometry(QRect(220, 158, 61, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("3ds"));
        font.setPointSize(16);
        redvalue->setFont(font);
        greenvalue = new QLabel(centralwidget);
        greenvalue->setObjectName(QString::fromUtf8("greenvalue"));
        greenvalue->setGeometry(QRect(220, 238, 61, 31));
        greenvalue->setFont(font);
        bluevalue = new QLabel(centralwidget);
        bluevalue->setObjectName(QString::fromUtf8("bluevalue"));
        bluevalue->setGeometry(QRect(220, 299, 61, 41));
        bluevalue->setFont(font);
        hvalue = new QLabel(centralwidget);
        hvalue->setObjectName(QString::fromUtf8("hvalue"));
        hvalue->setGeometry(QRect(220, 369, 61, 31));
        hvalue->setFont(font);
        svalue = new QLabel(centralwidget);
        svalue->setObjectName(QString::fromUtf8("svalue"));
        svalue->setGeometry(QRect(220, 449, 61, 31));
        svalue->setFont(font);
        vvalue = new QLabel(centralwidget);
        vvalue->setObjectName(QString::fromUtf8("vvalue"));
        vvalue->setGeometry(QRect(220, 528, 61, 31));
        vvalue->setFont(font);
        redlabel = new QLabel(centralwidget);
        redlabel->setObjectName(QString::fromUtf8("redlabel"));
        redlabel->setGeometry(QRect(320, 160, 35, 31));
        redlabel->setFont(font);
        greenlael = new QLabel(centralwidget);
        greenlael->setObjectName(QString::fromUtf8("greenlael"));
        greenlael->setGeometry(QRect(320, 240, 35, 31));
        greenlael->setFont(font);
        bluelabel = new QLabel(centralwidget);
        bluelabel->setObjectName(QString::fromUtf8("bluelabel"));
        bluelabel->setGeometry(QRect(320, 300, 35, 31));
        bluelabel->setFont(font);
        hlabel = new QLabel(centralwidget);
        hlabel->setObjectName(QString::fromUtf8("hlabel"));
        hlabel->setGeometry(QRect(320, 370, 35, 31));
        hlabel->setFont(font);
        slabel = new QLabel(centralwidget);
        slabel->setObjectName(QString::fromUtf8("slabel"));
        slabel->setGeometry(QRect(320, 450, 35, 41));
        slabel->setFont(font);
        vlabel = new QLabel(centralwidget);
        vlabel->setObjectName(QString::fromUtf8("vlabel"));
        vlabel->setGeometry(QRect(320, 520, 31, 41));
        vlabel->setFont(font);
        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(210, 50, 80, 41));
        medianslider = new QSlider(centralwidget);
        medianslider->setObjectName(QString::fromUtf8("medianslider"));
        medianslider->setGeometry(QRect(20, 650, 160, 16));
        medianslider->setOrientation(Qt::Horizontal);
        medianvalue = new QLabel(centralwidget);
        medianvalue->setObjectName(QString::fromUtf8("medianvalue"));
        medianvalue->setGeometry(QRect(220, 640, 61, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        medianvalue->setFont(font1);
        medianlabel = new QLabel(centralwidget);
        medianlabel->setObjectName(QString::fromUtf8("medianlabel"));
        medianlabel->setGeometry(QRect(320, 630, 121, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("3ds"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        medianlabel->setFont(font2);
        gaussian = new QRadioButton(centralwidget);
        gaussian->setObjectName(QString::fromUtf8("gaussian"));
        gaussian->setGeometry(QRect(470, 610, 121, 41));
        box = new QRadioButton(centralwidget);
        box->setObjectName(QString::fromUtf8("box"));
        box->setGeometry(QRect(470, 510, 101, 41));
        bislider = new QSlider(centralwidget);
        bislider->setObjectName(QString::fromUtf8("bislider"));
        bislider->setGeometry(QRect(20, 750, 160, 16));
        bislider->setOrientation(Qt::Horizontal);
        bivalue = new QLabel(centralwidget);
        bivalue->setObjectName(QString::fromUtf8("bivalue"));
        bivalue->setGeometry(QRect(220, 750, 41, 21));
        bivalue->setFont(font);
        bilabel = new QLabel(centralwidget);
        bilabel->setObjectName(QString::fromUtf8("bilabel"));
        bilabel->setGeometry(QRect(320, 740, 151, 31));
        bilabel->setFont(font);
        sharpening = new QRadioButton(centralwidget);
        sharpening->setObjectName(QString::fromUtf8("sharpening"));
        sharpening->setGeometry(QRect(480, 720, 191, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        picturelabel->setText(QString());
        redvalue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        greenvalue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        bluevalue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        hvalue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        svalue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        vvalue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        redlabel->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        greenlael->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        bluelabel->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        hlabel->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        slabel->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        vlabel->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        medianvalue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        medianlabel->setText(QCoreApplication::translate("MainWindow", "median", nullptr));
        gaussian->setText(QCoreApplication::translate("MainWindow", "gaussian filter", nullptr));
        box->setText(QCoreApplication::translate("MainWindow", "box filter", nullptr));
        bivalue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        bilabel->setText(QCoreApplication::translate("MainWindow", "bilateral", nullptr));
        sharpening->setText(QCoreApplication::translate("MainWindow", "sharpening", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
