#ifndef LIBRARYDATABASE_H
#define LIBRARYDATABASE_H

#include <QObject>
#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>

class LibraryDataBase : public QObject
{
    Q_OBJECT
public:
    explicit LibraryDataBase(QObject *parent = nullptr);
    void signUpDataBase(QString name, QString pswd, QString email, int n);
    void logInDataBase(QString email, QString pswd, int n);
private:
    //QSqlDatabase myDB;



public slots:

    //void log_in(QString name , QString password , int choice);
    // publisher
  //  void Upload_book(QString ,QString,QString,int);
   // void updateAdmin(QString ,QString,QString,QString,int);
    //void updateMember(QString,QString,QString,QString,int);
signals:
    //void error(string);
    //void error_login(QString);
    //void studentLoggedin(Student);
    //void publisherLoggedin(Publisher);

};

#endif // LIBRARYDATABASE_H
