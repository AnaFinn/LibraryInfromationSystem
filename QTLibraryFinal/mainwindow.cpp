#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Pocket Library");
//    this->centralWidget()->setStyleSheet(
//             "background-image:url(\"C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/.background.png\"); background-position: center;" );
    QPixmap bkgnd(":/picAssets/background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);


    ui->stackedWidget->insertWidget(1, &landingWidget);
    ui->stackedWidget->insertWidget(2, &signUpWidget);
    ui->stackedWidget->insertWidget(3, &memberWidget);
    ui->stackedWidget->insertWidget(4, &accountDialog);

    connect(&landingWidget, SIGNAL(signUpMove()), this,
            SLOT(signUpPage()));
    connect(&signUpWidget, SIGNAL(logInMove()), this,
            SLOT(logInPage()));
    connect(&accountDialog, SIGNAL(logInMove()), this,
            SLOT(logInPage()));
    connect(&landingWidget, SIGNAL(memberLoggedIn()), this,
            SLOT(memberPage()));

    //connect(&signUpWidget, SIGNAL(signUpData(QString name ,QString pswd,QString email,int n)), &libraryDataBase,
    //       SLOT(signUpDataBase(QString name, QString pswd, QString email, int n)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::signUpPage()
{

   ui->stackedWidget->setCurrentIndex(2);


}

void MainWindow::logInPage()
{

   ui->stackedWidget->setCurrentIndex(1);


}

void MainWindow::memberPage()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

