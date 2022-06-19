#ifndef LIBRARYDATABASE_H
#define LIBRARYDATABASE_H

#include <QObject>
#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include <QTableView>



class LibraryDataBase : public QObject
{
    Q_OBJECT

public:
    explicit LibraryDataBase(QObject *parent = nullptr);
private:
    QString username;
    QString bookname;
    QString bookauthor;
    QString bookdescription;

public slots:
    void signUpDataBase(QString name, QString pswd, QString email, int n);
    void setUsername(QString currentuser);
    QString getUsername();
    void showAllUsers();
    void logInDataBase(QString name, QString email, QString pswd, int n);
//  void addBookDataBase(QString name, QString author, QString description);
    void showAllBookDataBase();
    void setBookName(QString name);
    QString getBookName();
    void setBookAuthor(QString name);
    QString getBookAuthor();
    void setBookDescription(QString name);
    QString getBookDescription();
    void findBookByName(QString nameBook);

    void editUsersTable(QTableView *table);
    void printDataBase(QTableView *table, QString type);

    void requestBook(QString email, QString bookName);

    //void getBookAuthor();
    //void getBookDescription();
//    void deleteBookDataBase(QString name, QString author, QString description);
//    void editBookDataBase(QString name, QString author, QString description);
private slots:


signals:

    //void memberLoggedin();
    //void adminLoggedin();
private:




};

#endif // LIBRARYDATABASE_H
