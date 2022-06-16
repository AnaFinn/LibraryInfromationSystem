#include "landingwidget.h"
#include "ui_landingwidget.h"

LandingWidget::LandingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LandingWidget)
{
    ui->setupUi(this);

    ui->pswdLineEdit->setPlaceholderText("Enter your full name");
    ui->mailLineEdit->setPlaceholderText("Enter your email addres");

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
    if(ui->mailLineEdit->text().isEmpty() || ui->pswdLineEdit->text().isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("Please fill the form");
        msgBox.exec();
        return;
    }
    QString name,pass,email;int type=0;
    name=ui->mailLineEdit->text();
    pass=ui->pswdLineEdit->text();
    if(ui->memberRadioButton->isChecked())type=1;
    if(ui->adminRadiButton->isChecked())type=2;

    emit logInData(name,pass,email, type);
}
