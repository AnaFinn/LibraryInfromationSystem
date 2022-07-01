#include "accountdialog.h"
#include "ui_accountdialog.h"

AccountDialog::AccountDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountDialog)
{

    ui->setupUi(this);
     QPixmap pix1(":/picAssets/2105.q706.009.S.m005.c10.online library illustration.jpg");
     int w = 300;
     int h=600;

     ui->label->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));

     LibraryDataBase lDB;
    lDB.showAllUsers();
    ui->userNameLabel->setText(lDB.getUsername());
    //connect(ui->signOutPushButton,SIGNAL(clicked()),this,SLOT(signOutclicked()));
    ui->widgetPass->hide();
    ui->buttonBox->hide();
    ui->pswdLineEdit->setPlaceholderText("***");
    ui->pswdLineEdit_2->setPlaceholderText("***");

}

AccountDialog::~AccountDialog()
{
    delete ui;


}

void AccountDialog::on_pushButton_clicked()
{
    QString pswd, pswd2, emailTemp;
    ui->widgetPass->show();

}

void AccountDialog::setPswd(QString pswd)
{
    passwordTemp=pswd;
}

QString AccountDialog::getPswd()
{
    return passwordTemp;
}

void AccountDialog::setEmailAccount(QString em)
{
    email=em;
}

QString AccountDialog::getEmailAccount()
{
    return email;
}

bool AccountDialog::signOutclicked()
{
    ui->signOutPushButton->clicked(true);

    return false;
}

void AccountDialog::on_buttonBox_accepted()
{


}


void AccountDialog::on_pushButton_2_clicked()
{
    QString pswd, pswd2, emailTemp;
    ui->widgetPass->show();

    while (ui->pswdLineEdit->text() != ui->pswdLineEdit_2->text()||ui->pswdLineEdit->text().isEmpty() || ui->pswdLineEdit_2->text().isEmpty())
    {
        if(ui->pswdLineEdit->text().isEmpty() || ui->pswdLineEdit_2->text().isEmpty())
        {
            QMessageBox msgBox;
            msgBox.setText("Please fill the form");
            msgBox.exec();
            return;
        }
        if(ui->pswdLineEdit->text() != ui->pswdLineEdit_2->text())
        {
            QMessageBox msgBox;
            msgBox.setText("New passwords do not match!");
            msgBox.exec();

            return;
        }
    }


    emailDialog.show();
    if(emailDialog.exec()==QDialog::Accepted)
    {
        emailTemp=emailDialog.getEmailTemp();
        pswd=ui->pswdLineEdit->text();
        pswd2=ui->pswdLineEdit_2->text();

        setPswd(pswd);
        setEmailAccount(emailTemp);
    }
        ui->buttonBox->show();
}



