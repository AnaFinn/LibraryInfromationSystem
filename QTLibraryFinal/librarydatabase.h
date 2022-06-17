#ifndef LIBRARYDATABASE_H
#define LIBRARYDATABASE_H

#include <QObject>
#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include "user.h"

class LibraryDataBase : public QObject
{
    Q_OBJECT

public:
    explicit LibraryDataBase(QObject *parent = nullptr);
private:

    User *user;
    Member *member;
public slots:
    void signUpDataBase(QString name, QString pswd, QString email, int n);
    void logInDataBase(QString name, QString email, QString pswd, int n);


signals:

    //void memberLoggedin();
    //void adminLoggedin();
private:

QString username, mail, password;


};

#endif // LIBRARYDATABASE_H
