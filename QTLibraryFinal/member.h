#ifndef MEMBER_H
#define MEMBER_H

#include <QObject>
#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>


class Member : public QObject
{
    Q_OBJECT
public:
    explicit Member(QObject *parent = nullptr);

public slots:
    void setName(QString name);
    void setPswd(QString password);
    void setEmail(QString email);
    QString getName();
    QString getPswd();
    QString getEmail();



private:
    QString name;
    QString password;
    QString email;


//class Member:public User
//{
//private:
//    QString requestedBook;
//    QString currentBook;

//    public slots:
//    Member();
//    Member(QString name, QString password, QString email, QString requestedBook, QString currentBook);

//    void setRequestedBook(QString requestedBook);
//    void setCurrentBook(QString currentBook);

//    QString getRequestedBook();
//    QString getCurrentBook();

//};

//class Admin:public User
//{
//public slots:
//    Admin(QString name, QString password, QString email);
//};


signals:

};

#endif // MEMBER_H
