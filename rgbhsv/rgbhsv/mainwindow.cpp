#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "opencv2/opencv.hpp"
#include "opencv_modules.hpp"
#include "qabstractanimation.h"
#include "QPixmap"
#include "QDebug"
QImage cvMat2QImage (const cv::Mat& mat);
cv::Mat img;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QPixmap pix("test.jpg");
    img = cv::imread("test.jpg");
    int h = ui->picturelabel->height();
    int w = ui->picturelabel->width();
    ui -> picturelabel -> setPixmap(pix.scaled (w,h,Qt::KeepAspectRatio));
    //cv::Mat img;
    //img = cv::imread("test.jpg");
    //cv::namedWindow("Display window",cv::WINDOW_AUTOSIZE);
    //cv::imshow("Display window",img) ;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_redslider_valueChanged(int value)
{
    ui->redvalue->setText(QString("%1").arg(value));
    int w = ui->picturelabel->width();
    int h = ui->picturelabel->height();
    cv::Mat modified = img.clone();
    for(int i=0;i<modified.rows;i++)
    {
            for (int j=0;j<modified.cols;j++) {
                int pix = modified.at<cv::Vec3b>(i,j)[2];
                if( pix + value >255){
                    modified.at<cv::Vec3b>(i,j)[2]=255;
                }
                else if (pix + value < 0) {
                    modified.at<cv::Vec3b>(i,j)[2]=0;
                }
                else {
                    modified.at<cv::Vec3b>(i,j)[2]=pix + value;
                }
            }
     }

     ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));

}


QImage cvMat2QImage(const cv::Mat& mat)
{
    // 8-bits unsigned, NO. OF CHANNELS = 1
    if(mat.type() == CV_8UC1)
    {
        QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
        // Set the color table (used to translate colour indexes to qRgb values)
        image.setColorCount(256);
        for(int i = 0; i < 256; i++)
        {
            image.setColor(i, qRgb(i, i, i));
        }
        // Copy input Mat
        uchar *pSrc = mat.data;
        for(int row = 0; row < mat.rows; row ++)
        {
            uchar *pDest = image.scanLine(row);
            memcpy(pDest, pSrc, mat.cols);
            pSrc += mat.step;
        }
        return image;
    }
    else if(mat.type() == CV_8UC3)
       {
           // Copy input Mat
           const uchar *pSrc = (const uchar*)mat.data;
           // Create QImage with same dimensions as input Mat
           QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
           return image.rgbSwapped();
       }
       else if(mat.type() == CV_8UC4)
       {
           qDebug() << "CV_8UC4";
           // Copy input Mat
           const uchar *pSrc = (const uchar*)mat.data;
           // Create QImage with same dimensions as input Mat
           QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
           return image.copy();
       }
       else
       {
           qDebug() << "ERROR: Mat could not be converted to QImage.";
           return QImage();
       }
   }




void MainWindow::on_greenslider_valueChanged(int value)
{
     ui->greenvalue->setText(QString("%1").arg(value));
     int w = ui->picturelabel->width();
     int h = ui->picturelabel->height();
     cv::Mat modified = img.clone();
     for(int i=0;i<modified.rows;i++)
     {
             for (int j=0;j<modified.cols;j++) {
                 int pix = modified.at<cv::Vec3b>(i,j)[1];
                 if( pix + value >255){
                     modified.at<cv::Vec3b>(i,j)[1]=255;
                 }
                 else if (pix + value < 0) {
                     modified.at<cv::Vec3b>(i,j)[1]=0;
                 }
                 else {
                     modified.at<cv::Vec3b>(i,j)[1]=pix + value;
                 }
             }

     }
     ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));
}


void MainWindow::on_blueslider_valueChanged(int value)
{
     ui->bluevalue->setText(QString("%1").arg(value));
     ui->greenvalue->setText(QString("%1").arg(value));
     int w = ui->picturelabel->width();
     int h = ui->picturelabel->height();
     cv::Mat modified = img.clone();
     for(int i=0;i<modified.rows;i++)
     {
             for (int j=0;j<modified.cols;j++) {
                 int pix = modified.at<cv::Vec3b>(i,j)[0];
                 if( pix + value >255){
                     modified.at<cv::Vec3b>(i,j)[0]=255;
                 }
                 else if (pix + value < 0) {
                     modified.at<cv::Vec3b>(i,j)[0]=0;
                 }
                 else {
                     modified.at<cv::Vec3b>(i,j)[0]=pix + value;
                 }
             }

     }
     ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));
}



void MainWindow::on_hslider_valueChanged(int value)
{
     ui->hvalue->setText(QString("%1").arg(value));
     int w = ui->picturelabel->width();
     int h = ui->picturelabel->height();
     cv::Mat modified = img.clone();
     cv::cvtColor(img,modified,cv::COLOR_BGR2HSV);
     for(int i=0;i<modified.rows;i++)
     {
             for (int j=0;j<modified.cols;j++) {
                 int pix = modified.at<cv::Vec3b>(i,j)[0];
                 if( pix + value >360){
                     modified.at<cv::Vec3b>(i,j)[0]=360;
                 }
                 else if (pix + value < 0) {
                     modified.at<cv::Vec3b>(i,j)[0]=0;
                 }
                 else {
                     modified.at<cv::Vec3b>(i,j)[0]=pix + value;
                 }
             }
       }
       cvtColor(modified,img,CV_HSV2BGR);
       ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));
}

void MainWindow::on_sslider_valueChanged(int value)
{
     ui->svalue->setText(QString("%1").arg(value));
     int w = ui->picturelabel->width();
     int h = ui->picturelabel->height();
     cv::Mat modified = img.clone();
     cv::cvtColor(img,modified,cv::COLOR_BGR2HSV);
     for(int i=0;i<modified.rows;i++)
     {
             for (int j=0;j<modified.cols;j++) {
                 int pix = modified.at<cv::Vec3b>(i,j)[1];
                 if( pix + value >100){
                     modified.at<cv::Vec3b>(i,j)[1]=100;
                 }
                 else if (pix + value < 0) {
                     modified.at<cv::Vec3b>(i,j)[1]=0;
                 }
                 else {
                     modified.at<cv::Vec3b>(i,j)[1]=pix + value;
                 }
             }
       }
       cvtColor(modified,img,CV_HSV2BGR);
       ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));
}

void MainWindow::on_vslider_valueChanged(int value)
{
     ui->vvalue->setText(QString("%1").arg(value));
     int w = ui->picturelabel->width();
     int h = ui->picturelabel->height();
     cv::Mat modified = img.clone();
     cv::cvtColor(img,modified,cv::COLOR_BGR2HSV);
     for(int i=0;i<modified.rows;i++)
     {
             for (int j=0;j<modified.cols;j++) {
                 int pix = modified.at<cv::Vec3b>(i,j)[2];
                 if( pix + value >100){
                     modified.at<cv::Vec3b>(i,j)[2]=100;
                 }
                 else if (pix + value < 0) {
                     modified.at<cv::Vec3b>(i,j)[2]=0;
                 }
                 else {
                     modified.at<cv::Vec3b>(i,j)[2]=pix + value;
                 }
             }
       }
       cvtColor(modified,img,CV_HSV2BGR);
       ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));
}

void MainWindow::on_reset_clicked()
{
    ui->redslider->setValue(0);
    ui->greenslider->setValue(0);
    ui->blueslider->setValue(0);
    ui->hslider->setValue(0);
    ui->sslider->setValue(0);
    ui->vslider->setValue(0);
    ui->medianslider->setValue(0);
    ui->bislider->setValue(0);
    QPixmap pix("test.jpg");
    img = cv::imread("test.jpg");
    int h = ui->picturelabel->height();
    int w = ui->picturelabel->width();
    ui -> picturelabel -> setPixmap(pix.scaled (w,h,Qt::KeepAspectRatio));
    ui->box->setAutoExclusive(false);
    ui->box->setChecked(false);
    ui->box->setAutoExclusive(true);
    ui->gaussian->setAutoExclusive(false);
    ui->gaussian->setChecked(false);
    ui->gaussian->setAutoExclusive(true);
    ui->sharpening->setAutoExclusive(false);
    ui->sharpening->setChecked(false);
    ui->sharpening->setAutoExclusive(true);


}






void MainWindow::on_box_clicked()
{
     cv::Mat modified = img.clone();
     int w = ui->picturelabel->width();
     int h = ui->picturelabel->height();
     cv::blur( img, modified, cv::Size(w, h));
     ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));
}



void MainWindow::on_gaussian_clicked()
{
    cv::Mat modified = img.clone();
    int w = ui->picturelabel->width();
    int h = ui->picturelabel->height();
    cv::GaussianBlur( img, modified, cv::Size(w, h),0);
    ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));
}





void MainWindow::on_medianslider_valueChanged(int value)
{
    int newvalue = value*2+1;
    ui->medianvalue->setText(QString("%1").arg(newvalue));
    cv::Mat modified = img.clone();
    int w = ui->picturelabel->width();
    int h = ui->picturelabel->height();
    cv::medianBlur( img, modified, newvalue);
    ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));

}

void MainWindow::on_bislider_valueChanged(int value)
{
    int newvalue = value*2+1;
    ui->bivalue->setText(QString("%1").arg(newvalue));
    cv::Mat modified = img.clone();
    int w = ui->picturelabel->width();
    int h = ui->picturelabel->height();
    cv::bilateralFilter( img, modified, newvalue, newvalue*2, newvalue/2);
    ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));
}




void MainWindow::on_sharpening_clicked()
{
    cv::Mat modified = img.clone();
    int w = ui->picturelabel->width();
    int h = ui->picturelabel->height();
    cv::Mat sharpeningKernel = (cv::Mat_<double>(3,3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);

    filter2D(img, modified, -1, sharpeningKernel);

    ui->picturelabel->setPixmap(QPixmap::fromImage(cvMat2QImage(modified)).scaled(w,h,Qt::KeepAspectRatio));
}
