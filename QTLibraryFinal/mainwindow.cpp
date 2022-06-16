#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &landingWidget);
    ui->stackedWidget->insertWidget(2, &signUpWidget);

    connect(&landingWidget, SIGNAL(signUpMove()), this,
            SLOT(signUpPage()));
    connect(&signUpWidget, SIGNAL(logInMove()), this,
            SLOT(logInPage()));

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
