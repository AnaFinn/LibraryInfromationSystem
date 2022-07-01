#ifndef MEMBERWIDGET_H
#define MEMBERWIDGET_H

#include <QWidget>
#include <QObject>
#include <QDialog>
#include <QMessageBox>
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include "librarydatabase.h"
#include "emaildialog.h"
#include "reservationdialog.h"
#include "accountdialog.h"



namespace Ui {
class MemberWidget;
}

class MemberWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MemberWidget(QWidget *parent = nullptr);
    ~MemberWidget();

public slots:

signals:
    void logInMove();

private slots:
    void on_browsePushButton_clicked();

    void on_browsePushButton_2_clicked();

    void on_searchButton_clicked();

    void on_hobbitButton_clicked();

    void on_requestButton_clicked();

    //void on_userNameLabel_linkActivated(const QString &link);

    void on_accountSettingsButton_clicked();

    void on_yourBooksPushButton_clicked();

    void on_lesMisButton_clicked();

    void on_blackTulipButton_clicked();

private:
    Ui::MemberWidget *ui;
    //QString usernameCurrent;

//QString usernameCurrent;
    LibraryDataBase librarydatabase;
    EmailDialog emailDialog;
    ReservationDialog resDialog;
    AccountDialog accDialog;




};

#endif // MEMBERWIDGET_H
