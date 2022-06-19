#include "user.h"

User::User(QObject *parent)
    : QObject{parent}
{
//    myDB=QSqlDatabase::addDatabase("SQLITE");
//    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");

//    if(!myDB.open())
//    {
//        QMessageBox mb;
//        mb.setText("database is not open");
//        mb.exec();

//    }
//    qDebug()<<"database class is accessed";


}

//User::User(QString name, QString password, QString email)
//{
//    this->name=name;
//    this->email=email;
//    this->password=password;
//}

void User::setName(QString name)
{
    this->name=name;
}

void User::setPswd(QString password)
{
    this->password=password;
}

void User::setEmail(QString email)
{
    this->email=email;
}

QString User::getName()
{
    return name;
}

QString User::getPswd()
{
    return password;
}

QString User::getEmail()
{
    return email;
}

//Member::Member(QString name, QString password, QString email, QString requestedBook, QString currentBook): User(name, password, email)
//{
//    this->requestedBook=requestedBook;
//    this->currentBook=currentBook;
//}

//void Member::setRequestedBook(QString requestedBook)
//{
//    this->requestedBook=requestedBook;
//}

//void Member::setCurrentBook(QString currentBook)
//{
//    this->currentBook=currentBook;
//}

//QString Member::getRequestedBook()
//{
//   return requestedBook;
//}

//QString Member::getCurrentBook()
//{
//    return currentBook;
//}

//Admin::Admin(QString name, QString password, QString email):User(name, password, email)
//{

//}
