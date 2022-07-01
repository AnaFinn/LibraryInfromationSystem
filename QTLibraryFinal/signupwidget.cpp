#include "signupwidget.h"
#include "ui_signupwidget.h"

SignUpWidget::SignUpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUpWidget)
{
    ui->setupUi(this);
    QPixmap pix1(":/picAssets/singLibraryPic.jpg");
    int w = 800;
    int h=900;

    ui->picLabel->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));


    ui->setupUi(this);
    ui->nameLineEdit->setPlaceholderText("Enter your full name");
    ui->mailLineEdit->setPlaceholderText("Enter your email addres");
    ui->pswdLineEdit->setPlaceholderText("Enter your password");
    ui->confirmPswdLineEdit->setPlaceholderText("Confirm your password");

    connect(ui->createAccountButton,SIGNAL(clicked()),this,SLOT(signUpValidation()));
    connect(ui->logInButton,SIGNAL(clicked()),this,SLOT(logInButtonClicked()));

}

SignUpWidget::~SignUpWidget()
{
    delete ui;
}


void SignUpWidget::signUpValidation()
{
    QMessageBox mb;
    if(ui->nameLineEdit->text().isEmpty() || ui->mailLineEdit->text().isEmpty() || ui->pswdLineEdit->text().isEmpty()
            || ui->confirmPswdLineEdit->text().isEmpty() )
    {
        qDebug()<<"Rabotaet";
        mb.setText("Please fill the form");
        mb.exec();
//        return;
    }
    if (ui->pswdLineEdit->text() != ui->confirmPswdLineEdit->text())
    {
        mb.setText("Passwords should be identical");
        return;
    }

    QString name,pass,email;
    int type=0;
    name=ui->nameLineEdit->text();
    email=ui->mailLineEdit->text();
    pass=ui->pswdLineEdit->text();
    if(ui->memberRadioButton->isChecked())type=1;
    if(ui->adminRadiButton->isChecked())type=2;

    libraryDatabase->signUpDataBase(name,pass,email,type);
    emit logInMove();

}

void SignUpWidget::logInButtonClicked()
{
    emit logInMove();
}


