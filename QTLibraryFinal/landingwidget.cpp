#include "landingwidget.h"
#include "ui_landingwidget.h"

LandingWidget::LandingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LandingWidget)
{
    ui->setupUi(this);
    QPixmap pix1(":/picAssets/singLibraryPic.jpg");
    int w = 800;
    int h=900;

    ui->picLabel->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));


    ui->mailLineEdit->setPlaceholderText("Enter your email addres");
    ui->pswdLineEdit->setPlaceholderText("Enter your password");

    connect(ui->loginButton,SIGNAL(clicked()),this,SLOT(logInValidation()));
    connect(ui->signUpButton,SIGNAL(clicked()),this,SLOT(signUpClicked()));


}

LandingWidget::~LandingWidget()
{
    delete ui;
}



void LandingWidget::signUpClicked()
{
//    QMessageBox msgBox;
//    msgBox.setText("sign up clicked");
//    msgBox.exec();
    emit signUpMove();
}

void LandingWidget::logInValidation()
{
    LibraryDataBase ld;
    if(ui->mailLineEdit->text().isEmpty() || ui->pswdLineEdit->text().isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("Please fill the form");
        msgBox.exec();
        return;
    }
    QString pass,name, email;
    int type=0;
    email=ui->mailLineEdit->text();
    pass=ui->pswdLineEdit->text();
    if(ui->memberRadioButton->isChecked())type=1;
    if(ui->adminRadiButton->isChecked())type=2;


    if(libraryDatabase->logInDataBase(name, email, pass, type)==true)
    {
        emit memberLoggedIn();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Please enter a correct username\npassword. Note that both\nfields may be case-sensitive");
        msgBox.exec();
        return;
    }

    qDebug()<<ld.getUsername();



}
