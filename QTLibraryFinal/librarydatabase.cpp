#include "librarydatabase.h"

LibraryDataBase::LibraryDataBase(QObject *parent)
    : QObject{parent}
{
//    QSqlDatabase myDB=QSqlDatabase::addDatabase("SQLITE");
//    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");

//    if(!myDB.open())
//    {
//        qDebug()<<"database is not open!";

//    }
    //qDebug()<<"database class is accessed";
}


void LibraryDataBase::signUpDataBase(QString name, QString pswd, QString email, int n)
{
    qDebug()<<"database class is accessed";
    QSqlDatabase myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");

    if(!myDB.open())
    {
        qDebug()<<"database is not open!";

    }
    else{

            QSqlQuery qry;
            if(n==1)
            {
            qry.prepare("INSERT INTO members (name, password, email)"
                        "VALUES (:name, :password,:email)");
            qry.bindValue(":name", name);
            qry.bindValue(":password", pswd);
            qry.bindValue(":email", email);


            if (qry.exec())
            {
                 QMessageBox mb;
                mb.setText("data inserted!");
                mb.exec();
//                while(qry.next())
//                            {
//                                qDebug() << "Employee Name : " << qry.value(0).toString();
//                                qDebug() << "Employee Phone Number : " << qry.value(1).toString();
//                                qDebug() << "Employee Address : " << qry.value(1).toString();
//                            }
            }
            else
            {
                QMessageBox mb;
               mb.setText("data not inserted!");
               mb.exec();
            }
        }

    }
}
