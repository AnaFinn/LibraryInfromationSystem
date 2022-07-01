#ifndef EMAILDIALOG_H
#define EMAILDIALOG_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include "librarydatabase.h"
//#include "memberwidget.h"

namespace Ui {
class EmailDialog;
}

class EmailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EmailDialog(QWidget *parent = nullptr);
    ~EmailDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EmailDialog *ui;
    LibraryDataBase lDB;
    QString email;
public slots:
    void setEmailTemp(QString em);
    QString getEmailTemp();
};

#endif // EMAILDIALOG_H
