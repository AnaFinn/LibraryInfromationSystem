#include "emaildialog.h"
#include "ui_emaildialog.h"

EmailDialog::EmailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmailDialog)
{
    ui->setupUi(this);
    ui->emailConfirmLineEdit->setPlaceholderText("E-mail");
//    QString emailTemp = ui->emailConfirmLineEdit->text();
//    qDebug()<<lDB.getEmail()<<" from dialog window";
}

EmailDialog::~EmailDialog()
{
    delete ui;
}

void EmailDialog::on_buttonBox_accepted()
{
    QString emailTemp = ui->emailConfirmLineEdit->text();
    if(lDB.checkUser(emailTemp)==true)
    {
        setEmailTemp(emailTemp);
        qDebug()<<lDB.getEmail()<<" from dialog window";

    }
    else
    {
        QMessageBox mb;
        mb.setText("Sorry, we could not find your email");
        mb.exec();
    }
   }

void EmailDialog::setEmailTemp(QString em)
{
    email=em;
}

QString EmailDialog::getEmailTemp()
{
    return email;
}

