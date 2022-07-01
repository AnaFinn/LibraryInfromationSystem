#ifndef ACCOUNTDIALOG_H
#define ACCOUNTDIALOG_H

#include <QDialog>
#include "emaildialog.h"
#include "librarydatabase.h"

namespace Ui {
class AccountDialog;
}

class AccountDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AccountDialog(QWidget *parent = nullptr);
    ~AccountDialog();

private slots:
    void on_pushButton_clicked();

    void on_buttonBox_accepted();

    void on_pushButton_2_clicked();

   // void on_signOutPushButton_clicked();
signals:
        void logInMove();
private:
    Ui::AccountDialog *ui;
    EmailDialog emailDialog;
    QString passwordTemp;
    QString email;
public slots:
    void setPswd(QString pswd);
    QString getPswd();
    void setEmailAccount(QString em);
    QString getEmailAccount();

    bool signOutclicked();
};

#endif // ACCOUNTDIALOG_H
