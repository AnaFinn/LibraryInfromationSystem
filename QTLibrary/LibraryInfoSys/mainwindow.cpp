#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "bookinfodialog.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix1("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/hobbit");
    QPixmap pix2("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/lesMiserables");
    QPixmap pix3("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/blackTulip");
    QPixmap pix4("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/war-and-peace");
    QPixmap pix5("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/dune");
    QPixmap pix6("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/lotr");
    QPixmap pix7("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/annaKarenina");
    QPixmap pix8("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/1984");


    int w = ui->picLabel1->width();
    int h=ui->picLabel1->height();

    ui->picLabel1->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));
    ui->picLabel2->setPixmap(pix2.scaled(w,h,Qt::KeepAspectRatio));
    ui->picLabel3->setPixmap(pix3.scaled(w,h,Qt::KeepAspectRatio));
    ui->picLabel4->setPixmap(pix4.scaled(w,h,Qt::KeepAspectRatio));
    ui->picLabel5->setPixmap(pix5.scaled(w,h,Qt::KeepAspectRatio));
    ui->picLabel6->setPixmap(pix6.scaled(w,h,Qt::KeepAspectRatio));
    ui->picLabel7->setPixmap(pix7.scaled(w,h,Qt::KeepAspectRatio));
    ui->picLabel8->setPixmap(pix8.scaled(w,h,Qt::KeepAspectRatio));



}

MainWindow::~MainWindow()
{
    delete ui;
}


