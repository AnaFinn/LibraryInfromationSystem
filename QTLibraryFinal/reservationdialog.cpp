#include "reservationdialog.h"
#include "ui_reservationdialog.h"

ReservationDialog::ReservationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReservationDialog)
{
    ui->setupUi(this);
    ui->emaiLineEdit->setPlaceholderText("Enter your email to continue");
}

ReservationDialog::~ReservationDialog()
{
    delete ui;
}

void ReservationDialog::on_buttonBox_accepted()
{
    QString emailTemp = ui->emaiLineEdit->text();
    QString dateTemp;
    QDate dateCalendar = ui->calendarWidget->selectedDate();
    dateTemp=dateCalendar.toString();
    if(lDB.checkUser(emailTemp)==true)
    {
        setEmailTemp(emailTemp);
        setDate(dateTemp);

        qDebug()<<getEmailTemp()<<" from dialog window";

    }
    else
    {
        QMessageBox mb;
        mb.setText("Sorry, we could not find your email");
        mb.exec();
        return;
    }

}

void ReservationDialog::setEmailTemp(QString em)
{
    email=em;
}

QString ReservationDialog::getEmailTemp()
{
    return email;
}

void ReservationDialog::setDate(QString dateTemp)
{
    date=dateTemp;
}

QString ReservationDialog::getDate()
{
    return date;
}


