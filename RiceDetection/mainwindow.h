#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_erosion_clicked();

    void on_elementslider1_valueChanged(int value);

    void on_elementslider2_valueChanged(int value);

    void on_dilation_clicked();

    void on_binary_clicked();

    void on_reset_clicked();




    void on_contour_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
