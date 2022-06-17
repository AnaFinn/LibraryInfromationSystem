#ifndef USER_H
#define USER_H
#include <QString>
#include <QObject>
#include <QDebug>


class User: public QObject
{
public:
    User();
    User(QString name, QString password, QString email);
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
};

class Member:public User
{
private:
    QString requestedBook;
    QString currentBook;

    public:
    Member();
    Member(QString name, QString password, QString email, QString requestedBook, QString currentBook);

    void setRequestedBook(QString requestedBook);
    void setCurrentBook(QString currentBook);

    QString getRequestedBook();
    QString getCurrentBook();

};

class Admin:public User
{
public:
    Admin(QString name, QString password, QString email);
};

#endif // USER_H
