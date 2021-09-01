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
    QRadioButton *erosion;
    QRadioButton *dilation;
    QRadioButton *contour;
    QSlider *elementslider1;
    QSlider *elementslider2;
    QLabel *element1;
    QLabel *element2;
    QRadioButton *binary;
    QPushButton *reset;
    QLabel *ricenum;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        picturelabel = new QLabel(centralwidget);
        picturelabel->setObjectName(QString::fromUtf8("picturelabel"));
        picturelabel->setGeometry(QRect(30, 40, 221, 181));
        erosion = new QRadioButton(centralwidget);
        erosion->setObjectName(QString::fromUtf8("erosion"));
        erosion->setGeometry(QRect(300, 100, 81, 31));
        dilation = new QRadioButton(centralwidget);
        dilation->setObjectName(QString::fromUtf8("dilation"));
        dilation->setGeometry(QRect(300, 160, 81, 31));
        contour = new QRadioButton(centralwidget);
        contour->setObjectName(QString::fromUtf8("contour"));
        contour->setGeometry(QRect(300, 220, 81, 31));
        elementslider1 = new QSlider(centralwidget);
        elementslider1->setObjectName(QString::fromUtf8("elementslider1"));
        elementslider1->setGeometry(QRect(400, 110, 160, 16));
        elementslider1->setMaximum(2);
        elementslider1->setOrientation(Qt::Horizontal);
        elementslider2 = new QSlider(centralwidget);
        elementslider2->setObjectName(QString::fromUtf8("elementslider2"));
        elementslider2->setGeometry(QRect(400, 170, 160, 16));
        elementslider2->setMaximum(2);
        elementslider2->setOrientation(Qt::Horizontal);
        element1 = new QLabel(centralwidget);
        element1->setObjectName(QString::fromUtf8("element1"));
        element1->setGeometry(QRect(630, 100, 41, 31));
        element2 = new QLabel(centralwidget);
        element2->setObjectName(QString::fromUtf8("element2"));
        element2->setGeometry(QRect(630, 160, 41, 31));
        binary = new QRadioButton(centralwidget);
        binary->setObjectName(QString::fromUtf8("binary"));
        binary->setGeometry(QRect(300, 40, 81, 31));
        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(70, 260, 80, 41));
        ricenum = new QLabel(centralwidget);
        ricenum->setObjectName(QString::fromUtf8("ricenum"));
        ricenum->setGeometry(QRect(290, 270, 121, 41));
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
        erosion->setText(QCoreApplication::translate("MainWindow", "erosion", nullptr));
        dilation->setText(QCoreApplication::translate("MainWindow", "dilation", nullptr));
        contour->setText(QCoreApplication::translate("MainWindow", "contour", nullptr));
        element1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        element2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        binary->setText(QCoreApplication::translate("MainWindow", "binary", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        ricenum->setText(QCoreApplication::translate("MainWindow", "     num of rice:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
