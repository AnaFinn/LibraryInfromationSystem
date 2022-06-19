#include "librarydatabase.h"

LibraryDataBase::LibraryDataBase(QObject *parent)
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


void LibraryDataBase::signUpDataBase(QString name, QString pswd, QString email, int n)
{
    QMessageBox mb;
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

               mb.setText("data not inserted!");
               mb.exec();
            }
        }
            else if(n==2){
                qry.prepare("INSERT INTO admin (name, password, email)"
                            "VALUES (:name, :password,:email)");
                qry.bindValue(":name", name);
                qry.bindValue(":password", pswd);
                qry.bindValue(":email", email);


                if (qry.exec())
                {

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

                   mb.setText("data not inserted!");
                   mb.exec();
                }
            }
            else{

               mb.setText("Please, choose thw way you want to login!");
               mb.exec();
            }

    }
}

void LibraryDataBase::logInDataBase(QString name, QString email, QString pswd, int n)
{
    QMessageBox mb;
    QSqlDatabase myDB;

    qDebug()<<"database class login function is accessed";
    myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");


    if(!myDB.open())
    {
        qDebug()<<"database is not open!";

    }
    else
    {
        QSqlQuery qry;
        if(n==1)
        {
            qry.exec("SELECT * FROM members");

            //qry.bindValue(":name", name);
            qry.bindValue(":password", pswd);
            qry.bindValue(":email", email);


            int pswdNo = qry.record().indexOf("password");
            int emailNo = qry.record().indexOf("email");
            int nameNo = qry.record().indexOf("name");

            qDebug()<<qry.isSelect();
            qDebug()<<qry.record().indexOf("email");
            qDebug()<<qry.record().indexOf("password");

            if (qry.exec())
            {
//                mb.setText("qry is executed ");
//                mb.exec();
                qDebug()<<qry.size();
                 while (qry.next())
                 {
                     QString nameFromDB = qry.value(nameNo).toString();
                     QString emailFromDB = qry.value(emailNo).toString();
                     QString passwordFromDB =  qry.value(pswdNo).toString();
                     //QString nameFromDB =  qry.value(nameNo).toString();


                     if(emailFromDB==email && passwordFromDB==pswd)
                     {
                         mb.setText("Login Success ");
                         mb.exec();
                         //setUsername(nameFromDB);
                         //member->setName(emailFromDB);
                         break;
                     }

                 }

            }
            else
            {

               mb.setText("connection failed");
               mb.exec();
            }

        }

        else if (n==2)
        {
            qry.exec("SELECT * FROM admin");

            qry.bindValue(":password", pswd);
            qry.bindValue(":email", email);
            //qry.bindValue(":name", name);

            int pswdNo = qry.record().indexOf("password");
            int emailNo = qry.record().indexOf("email");
            //int nameNo = qry.record().indexOf("name");
            qDebug()<<qry.isSelect();
            qDebug()<<qry.record().indexOf("email");
            qDebug()<<qry.record().indexOf("password");

            if (qry.exec())
            {
//                mb.setText("qry is executed ");
//                mb.exec();
                qDebug()<<qry.size();
                 while (qry.next())
                 {

                     QString emailFromDB = qry.value(emailNo).toString();
                     QString passwordFromDB =  qry.value(pswdNo).toString();
                     //QString nameFromDB=qry.value(nameNo).toString();
                     //qDebug()<<qry.value(nameNo).toString();

                     if(emailFromDB==email && passwordFromDB==pswd)
                     {

                         mb.setText("Login Success ");
                         mb.exec();


                     }

                 }


            }
            else
            {

               mb.setText("connection failed");
               mb.exec();
            }

        }
    }

}

void LibraryDataBase::showAllBookDataBase()
{
    QMessageBox mb;
    QSqlDatabase myDB;


    qDebug()<<"database class all books function is accessed";
    myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");


    if(!myDB.open())
    {
        qDebug()<<"database is not open!";

    }
    else
    {
        QSqlQuery qry;

        qry.exec("SELECT * FROM books");

        int idName = qry.record().indexOf("name");
        int idAuthor = qry.record().indexOf("author");
        int idDesc = qry.record().indexOf("description");
        while (qry.next())
        {
           QString name = qry.value(idName).toString();
           setBookName(name);

           QString author = qry.value(idAuthor).toString();
           setBookAuthor(author);

           QString description = qry.value(idDesc).toString();
           setBookDescription(description);
        }
    }
}

void LibraryDataBase::setBookName(QString name)
{
    bookname=name;
}

QString LibraryDataBase::getBookName()
{
    return bookname;
}


void LibraryDataBase::setBookAuthor(QString author)
{
    bookauthor=author;
}

QString LibraryDataBase::getBookAuthor()
{
    return bookauthor;
}


void LibraryDataBase::setBookDescription(QString desc)
{
    bookdescription=desc;
}

QString LibraryDataBase::getBookDescription()
{
    return bookdescription;
}

void LibraryDataBase::findBookByName(QString nameBook)
{
    QMessageBox mb;
    QSqlDatabase myDB;


    qDebug()<<"database class all books function is accessed";
    myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");


    if(!myDB.open())
    {
        qDebug()<<"database is not open!";

    }
    else
    {
        QSqlQuery qry;

        qry.exec("SELECT * FROM books");
        qry.bindValue(":name", nameBook);
        int idName = qry.record().indexOf("name");
        int idAuthor = qry.record().indexOf("author");
        int idDesc = qry.record().indexOf("description");
        while (qry.next())
        {
            QString nameFromDB = qry.value(idName).toString();
            QString authorFromDB = qry.value(idAuthor).toString();
            QString descFromDB =  qry.value(idDesc).toString();
            if(nameFromDB==nameBook)
            {
                setBookAuthor(authorFromDB);
                setBookDescription(descFromDB);
            }
        }
    }
}

void LibraryDataBase::editUsersTable(QTableView* table)
{
    QMessageBox mb;
    QSqlDatabase myDB;
    QSqlTableModel *tabelModel;


    qDebug()<<"database class all books function is accessed";
    myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");


    if(!myDB.open())
    {
        qDebug()<<"database is not open!";

    }
    else
    {
        tabelModel = new QSqlTableModel();
        tabelModel->setTable("members");
        tabelModel->select();

        table->setModel(tabelModel);
    }
}

void LibraryDataBase::printDataBase(QTableView *table, QString type)
{
    QMessageBox mb;
    QSqlDatabase myDB;
    QSqlQueryModel *qrymodel;


    qDebug()<<"database class all books function is accessed";
    myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");


    if(!myDB.open())
    {
        qDebug()<<"database is not open!";

    }
    else
    {
        qrymodel=new QSqlQueryModel();
        qrymodel->setQuery("SELECT * FROM books");
        table->setModel(qrymodel);
    }
}

void LibraryDataBase::requestBook(QString email, QString bookName)
{
    QMessageBox mb;
    QSqlDatabase myDB;


    qDebug()<<"database class request book function is accessed";
    myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");


    if(!myDB.open())
    {
        qDebug()<<"database is not open!";

    }
    else
    {
        QSqlQuery qry;

        qry.prepare("UPDATE members SET requestedBooks = ? WHERE email = ?");
        qry.bindValue(0, bookName);
        qry.bindValue(1, email);
        qry.exec();




        //int idName = qry.record().indexOf("name");


    }
}

void LibraryDataBase::setUsername(QString currentuser)
{
    username=currentuser;

}

QString LibraryDataBase::getUsername()
{
    return username;
}

void LibraryDataBase::showAllUsers()
{
    QMessageBox mb;
    QSqlDatabase myDB;


    qDebug()<<"database class all books function is accessed";
    myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");


    if(!myDB.open())
    {
        qDebug()<<"database is not open!";

    }
    else
    {
        QSqlQuery qry;

        qry.exec("SELECT * FROM members");

        int idName = qry.record().indexOf("name");
        int idEmail = qry.record().indexOf("email");
        int idPassword = qry.record().indexOf("password");
        int idBorrowedBooks = qry.record().indexOf("borrowedBooks");
        int idRequestedBooks = qry.record().indexOf("requestedBooks");
        while (qry.next())
        {
           QString name = qry.value(idName).toString();
           setUsername(name);
           //qDebug()<<getUsername();
           QString email = qry.value(idEmail).toString();
           //setBookAuthor(author);

           QString password = qry.value(idPassword).toString();
           //setBookDescription(description);
           QString borrowedBooks = qry.value(idBorrowedBooks).toString();
           //setBookDescription(description);
           QString requestedBooks = qry.value(idRequestedBooks).toString();
           //setBookDescription(description);
        }
    }
}


