#ifndef RESERVATIONDIALOG_H
#define RESERVATIONDIALOG_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QDate>
#include "librarydatabase.h"

namespace Ui {
class ReservationDialog;
}

class ReservationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReservationDialog(QWidget *parent = nullptr);
    ~ReservationDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ReservationDialog *ui;
    LibraryDataBase lDB;
    QString email;
    QString date;
public slots:
    void setEmailTemp(QString em);
    QString getEmailTemp();
    void setDate(QString date);
    QString getDate();
};

#endif // RESERVATIONDIALOG_H
