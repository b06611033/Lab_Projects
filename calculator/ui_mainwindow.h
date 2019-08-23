/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *display;
    QPushButton *zero;
    QPushButton *dot;
    QPushButton *ac;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *equals;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *times;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *divide;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(339, 256);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        display = new QLineEdit(centralWidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(10, 9, 231, 31));
        zero = new QPushButton(centralWidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(10, 50, 51, 31));
        dot = new QPushButton(centralWidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        dot->setGeometry(QRect(99, 50, 51, 31));
        ac = new QPushButton(centralWidget);
        ac->setObjectName(QString::fromUtf8("ac"));
        ac->setGeometry(QRect(190, 50, 51, 31));
        seven = new QPushButton(centralWidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(10, 90, 51, 31));
        eight = new QPushButton(centralWidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(100, 90, 51, 31));
        nine = new QPushButton(centralWidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(190, 90, 51, 31));
        four = new QPushButton(centralWidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(9, 129, 51, 31));
        five = new QPushButton(centralWidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(100, 130, 51, 31));
        six = new QPushButton(centralWidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(190, 130, 51, 31));
        equals = new QPushButton(centralWidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setGeometry(QRect(280, 10, 51, 31));
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(279, 50, 51, 31));
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(280, 90, 51, 31));
        times = new QPushButton(centralWidget);
        times->setObjectName(QString::fromUtf8("times"));
        times->setGeometry(QRect(280, 130, 51, 31));
        one = new QPushButton(centralWidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(10, 170, 51, 31));
        two = new QPushButton(centralWidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(100, 170, 51, 31));
        three = new QPushButton(centralWidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(190, 170, 51, 31));
        divide = new QPushButton(centralWidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(280, 170, 51, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 339, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        ac->setText(QCoreApplication::translate("MainWindow", "ac", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        times->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
