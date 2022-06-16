#ifndef SIGNUPWIDGET_H
#define SIGNUPWIDGET_H

#include <QWidget>

#include <QObject>
#include <QMessageBox>
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include "landingwidget.h"
#include "librarydatabase.h"


namespace Ui {
class SignUpWidget;
}

class SignUpWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SignUpWidget(QWidget *parent = nullptr);
    ~SignUpWidget();

signals:
    //void signUpData(QString name ,QString pswd,QString email,int n);
    void logInMove();


private:
    Ui::SignUpWidget *ui;
    LibraryDataBase *libraryDatabase;


private slots:
    void signUpValidation();
    void logInButtonClicked();


};

#endif // SIGNUPWIDGET_H
