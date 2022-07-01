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
    //open SQLite database
    QMessageBox mb;
    qDebug()<<"database class is accessed";
    QSqlDatabase myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");

    if(!myDB.open())//check if the connection is set
    {
        qDebug()<<"database is not open!";

    }
    else{

            QSqlQuery qry;
            if(n==1)//check if the user is a member or admin(passed parameters)
            {
                //preparing query to insert data in the database (member table; name, password, and email column)
            qry.prepare("INSERT INTO members (name, password, email)"
                        "VALUES (:name, :password,:email)");
            //bind values with the passed parameters
            qry.bindValue(":name", name);
            qry.bindValue(":password", pswd);
            qry.bindValue(":email", email);

            //check if the query is executed
            if (qry.exec())
            {


                 qDebug() << "Employee Name : " << qry.value(0).toString();

            }
            else
            {

               mb.setText("data not inserted!");
               mb.exec();
            }
        }
            //insert admin admin data
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

bool LibraryDataBase::logInDataBase(QString name, QString email, QString pswd, int n)
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

            //assign indexes of the values to the integer varibles.
            int pswdNo = qry.record().indexOf("password");
            int emailNo = qry.record().indexOf("email");
            int nameNo = qry.record().indexOf("name");

            qDebug()<<qry.isSelect();//check if the query is selected and working properly.
            qDebug()<<qry.record().indexOf("email");
            qDebug()<<qry.record().indexOf("password");

            //check if query is executed
            if (qry.exec())
            {
//                mb.setText("qry is executed ");
//                mb.exec();
                qDebug()<<qry.size();
                 while (qry.next())
                 {
                     //while there is a content in the table assign the value of the cells to strings
                     QString nameFromDB = qry.value(nameNo).toString();
                     QString emailFromDB = qry.value(emailNo).toString();
                     QString passwordFromDB =  qry.value(pswdNo).toString();


                    //check if the passed parameters equel to values from the table
                     if(emailFromDB==email && passwordFromDB==pswd)
                     {
                         return true;//return true if the user is logged in
                         break;//break loop to stop iteration
                     }

                 }
            }
            else
            {
                //if the query does not execute
               mb.setText("connection failed");
               mb.exec();
            }

        }

        else if (n==2)//accessing admin table
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

                         return true;
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
    }
return false;
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
        qrymodel->setQuery("SELECT name, author, description FROM books");
        table->setModel(qrymodel);
    }
}

void LibraryDataBase::requestBook(QString email, QString bookName)
{
    QMessageBox mb;
    QSqlDatabase myDB;

    //initilising SQLITE database

    qDebug()<<"database class request book function is accessed";
    myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");


    //check if the connection is set
    if(!myDB.open())
    {
        qDebug()<<"database is not open!";

    }
    else
    {
        //update the table values with the function .prepare
        QSqlQuery qry;


        qry.prepare("UPDATE members SET borrowedBooks = ? WHERE email = ?");
        //bind values to the passed parameters
        qry.bindValue(0, bookName);
        qry.bindValue(1, email);
        qry.exec();

    }
}

void LibraryDataBase::reserveBook(QString email, QString bookName)
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

bool LibraryDataBase::checkUser(QString email)
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
        //qry.bindValue(0, email);
        int idEmail = qry.record().indexOf("email");
        //qry.exec();
        while (qry.next())
        {
            QString emailFromDB = qry.value(idEmail).toString();
           // QString authorFromDB = qry.value(idAuthor).toString();
            //QString descFromDB =  qry.value(idDesc).toString();
            if(emailFromDB==email)
            {
                return true;
                break;
            }
            //continue;
        }
    }
    return false;
}

bool LibraryDataBase::checkBook(QString name)
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
        qry.bindValue("name", name);
        int idName = qry.record().indexOf("name");

        while (qry.next())
        {
            QString nameFromDB = qry.value(idName).toString();
           // QString authorFromDB = qry.value(idAuthor).toString();
            //QString descFromDB =  qry.value(idDesc).toString();
            if(nameFromDB==name)
            {
                return true;
                break;
            }
        }
    }
    return false;
}

bool LibraryDataBase::checkBookAvailability(QString name)
{
    QMessageBox mb;
    QSqlDatabase myDB;

    //initilising SQLITE databse

    qDebug()<<"database class all books function is accessed";
    myDB=QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName("C:/Users/karpo/Desktop/Library_Info_Sys/build-QTLibraryFinal-Desktop_Qt_6_3_0_MinGW_64_bit-Debug/database.db");


    if(!myDB.open())//check connection
    {
        qDebug()<<"database is not open!";

    }
    else
    {
        QSqlQuery qry;

        //iterate through all data in the table
        qry.exec("SELECT * FROM books");

        //geting indexes of the columns
        int idName = qry.record().indexOf("name");
        int idAv = qry.record().indexOf("available");

        //setting the loop to read the content of the table till the last row
        while (qry.next())
        {
            QString nameFromDB = qry.value(idName).toString();
            QString avFromDB = qry.value(idAv).toString();

            //setting criteria for the values
            if(avFromDB=='a' && nameFromDB==name)
            {
                return true;//return true if the criteria is met
                break;//break the loop to stop iteration

            }
        }
    }
    return false;//return false if the book is unavailable
}

void LibraryDataBase::setBookUnavailable(QString name)
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

        //int idName = qry.record().indexOf("name");

        qry.prepare("UPDATE books SET available='na' WHERE name = ?");
        qry.bindValue(0, name);
        //qry.bindValue(1, email);
        qry.exec();
    }
}

void LibraryDataBase::setBookReservation(QString resValue, QString name)
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

        qry.prepare("UPDATE books SET reserved = ? WHERE name = ?");
        qry.bindValue(0, resValue);
        qry.bindValue(1, name);
        qry.exec();




        //int idName = qry.record().indexOf("name");


    }
}

void LibraryDataBase::changePassword(QString email, QString pswd)
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

        qry.prepare("UPDATE members SET password = ? WHERE email = ?");
        qry.bindValue(0, pswd);
        qry.bindValue(1, email);
        qry.exec();




        //int idName = qry.record().indexOf("name");


    }
}

void LibraryDataBase::setEmail(QString currentuser)
{
    email=currentuser;
}

QString LibraryDataBase::getEmail()
{
    return email;
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
           qDebug()<<getUsername();
           QString email = qry.value(idEmail).toString();
           setEmail(email);

           QString password = qry.value(idPassword).toString();
           //setBookDescription(description);
           QString borrowedBooks = qry.value(idBorrowedBooks).toString();
           //setBookDescription(description);
           QString requestedBooks = qry.value(idRequestedBooks).toString();
           //setBookDescription(description);
        }
    }
}


