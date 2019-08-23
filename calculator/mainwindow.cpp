#include "mainwindow.h"
#include "ui_mainwindow.h"
double calcval = 0.0;
bool minusclicked = false;
bool plusclicked = false;
bool timesclicked = false;
bool divideclicked = false;
bool numberclicked = false;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->display->setText(QString::number(calcval));
    connect(ui->one,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->two,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->three,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->four,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->five,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->six,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->seven,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->eight,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->nine,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->zero,SIGNAL(released()),this,SLOT(pressnum()));
    connect(ui->plus,SIGNAL(released()),this,SLOT(pressoperator()));
    connect(ui->minus,SIGNAL(released()),this,SLOT(pressoperator()));
    connect(ui->times,SIGNAL(released()),this,SLOT(pressoperator()));
    connect(ui->divide,SIGNAL(released()),this,SLOT(pressoperator()));
    connect(ui->dot,SIGNAL(released()),this,SLOT(pressdot()));
    connect(ui->equals,SIGNAL(released()),this,SLOT(pressequal()));
    connect(ui->ac,SIGNAL(released()),this,SLOT(pressac()));

}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::pressnum()
{
    QPushButton *button =(QPushButton *)sender();
    QString buttonvalue = button->text();
    QString displayvalue = ui->display->text();
    if (QString::compare(displayvalue,"0")==0 || QString::compare(displayvalue," ")==0)

    {
        ui->display->setText(buttonvalue);
        ui->dot->setEnabled(true);
    }
    else
    {
         QString newvalue = displayvalue+buttonvalue;
         ui->display->setText(newvalue);
    }
    ui->equals->setEnabled(true);
}
void MainWindow::pressoperator()
{
    minusclicked = false;
    plusclicked = false;
    timesclicked = false;
    divideclicked = false;
    QString displayvalue = ui->display->text();
    calcval = displayvalue.toDouble();
    QPushButton *button =(QPushButton *)sender();
    QString buttonvalue = button->text();
    ui->minus->setEnabled(false);
    ui->plus->setEnabled(false);
    ui->times->setEnabled(false);
    ui->divide->setEnabled(false);
    ui->equals->setEnabled(false);
    if (QString::compare(buttonvalue,"-")==0 )    //Qt::CaseInsensitive
    {
        minusclicked = true;

    }
    else if (QString::compare(buttonvalue,"+")==0 )    //Qt::CaseInsensitive
    {
        plusclicked = true;
    }
    else if (QString::compare(buttonvalue,"*")==0 )    //Qt::CaseInsensitive
    {
        timesclicked = true;
    }
    else if (QString::compare(buttonvalue,"/")==0 )    //Qt::CaseInsensitive
    {
        divideclicked = true;
    }
    ui->display->setText(" ");

 }
void MainWindow::pressequal()
{
    double answer = 0.0;
    QString displayvalue = ui->display->text();
    double dbldisplayvalue = displayvalue.toDouble();
    if (minusclicked == true)
    {
        answer = calcval-dbldisplayvalue;
    }
    else if (plusclicked == true)
    {
        answer = calcval+dbldisplayvalue;
    }
    else if (timesclicked == true)
    {
        answer = calcval*dbldisplayvalue;
    }
    else if (divideclicked == true)
    {
        answer = calcval/dbldisplayvalue;
    }
    else
    {
        answer = dbldisplayvalue;
    }
    ui->display->setText(QString::number(answer));
    ui->minus->setEnabled(true);
    ui->plus->setEnabled(true);
    ui->times->setEnabled(true);
    ui->divide->setEnabled(true);
    ui->equals->setEnabled(false);
}
void MainWindow::pressac()
{
    calcval = 0;
    ui->display->setText("0");
    ui->dot->setEnabled(true);
    ui->minus->setEnabled(true);
    ui->plus->setEnabled(true);
    ui->times->setEnabled(true);
    ui->divide->setEnabled(true);
    ui->equals->setEnabled(true);
}
void MainWindow::pressdot()
{
    QPushButton *button =(QPushButton *)sender();
    QString buttonvalue = button->text();
    QString displayvalue = ui->display->text();
    QString newvalue = displayvalue+buttonvalue;
    ui->display->setText(newvalue);
    ui->dot->setEnabled(false);
}
