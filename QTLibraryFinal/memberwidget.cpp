#include "memberwidget.h"
#include "ui_memberwidget.h"

MemberWidget::MemberWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MemberWidget)
{

   //LibraryDataBase *ldb=new LibraryDataBase;
   ui->setupUi(this);
   QPixmap pix1("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/hobbit");
   QPixmap pix2("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/lesMiserables");
   QPixmap pix3("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/blackTulip");
   QPixmap pix4("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/war-and-peace");
   QPixmap pix5("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/dune");
   QPixmap pix6("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/lotr");
   QPixmap pix7("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/annaKarenina");
   QPixmap pix8("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/1984");


   int w = ui->picLabel1->width();
   int h=ui->picLabel1->height();

   ui->picLabel1->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));
   ui->picLabel2->setPixmap(pix2.scaled(w,h,Qt::KeepAspectRatio));
   ui->picLabel3->setPixmap(pix3.scaled(w,h,Qt::KeepAspectRatio));
   ui->picLabel4->setPixmap(pix4.scaled(w,h,Qt::KeepAspectRatio));
   ui->picLabel5->setPixmap(pix5.scaled(w,h,Qt::KeepAspectRatio));
   ui->picLabel6->setPixmap(pix6.scaled(w,h,Qt::KeepAspectRatio));
   ui->picLabel7->setPixmap(pix7.scaled(w,h,Qt::KeepAspectRatio));
   ui->picLabel8->setPixmap(pix8.scaled(w,h,Qt::KeepAspectRatio));



   librarydatabase.showAllUsers();
   //ui->userNameLabel->setText(ldb->getUsername());
    ui->tableView->hide();
    ui->bookInfoWidget->hide();
    ui->groupBox_2->show();

    ui->searchLineEdit->setPlaceholderText("Search");
    connect(ui->cancelButton,SIGNAL(clicked()),ui->bookInfoWidget, SLOT(hide()));
    ui->userNameLabel->setText(librarydatabase.getUsername());
}

MemberWidget::~MemberWidget()
{
    delete ui;
}



void MemberWidget::on_browsePushButton_clicked()
{

  //LibraryDataBase librarydatabase;
//  librarydatabase.showAllUsers();
//  //librarydatabase.showAllBookDataBase();
//    librarydatabase.findBookByName("The Hobbit");
//    librarydatabase.getBookAuthor();
//    qDebug()<<librarydatabase.getBookAuthor();
  librarydatabase.printDataBase(ui->tableView, "books");
    ui->tableView->show();


   //ui->userNameLabel->setText(librarydatabase.getBookName());
}



void MemberWidget::on_browsePushButton_2_clicked()
{
    ui->tableView->hide();
    ui->bookInfoWidget->hide();
    ui->groupBox_2->show();
}


void MemberWidget::on_searchButton_clicked()
{
    ui->tableView->hide();
    QString searchItem = ui->searchLineEdit->text();
    //LibraryDataBase librarydatabase
    librarydatabase.findBookByName(searchItem);
    if(librarydatabase.checkBook(searchItem)==true)
    {
        ui->bookNameLabel->setText(searchItem);
        ui->bookAuthorLabel->setText(librarydatabase.getBookAuthor());
        ui->bookDescLabel->setText(librarydatabase.getBookDescription());
        ui->bookInfoWidget->show();
        //ui->groupBox_2->hide();
    }
    else
    {
        QMessageBox mb;
        mb.setText("Sorry, we could not find\nthis book in our library!");
        mb.exec();
    }



}


void MemberWidget::on_hobbitButton_clicked()
{


    //ui->widget_11->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));

    librarydatabase.findBookByName("The Hobbit");
    ui->bookNameLabel->setText("The Hobbit");
    ui->bookAuthorLabel->setText(librarydatabase.getBookAuthor());
    ui->bookDescLabel->setText(librarydatabase.getBookDescription());
    ui->bookInfoWidget->show();

}


void MemberWidget::on_requestButton_clicked()
{
    //take the value from the lable and assign it to the string
    QString bookNameTemp = ui->bookNameLabel->text();
    qDebug()<<bookNameTemp;

    //check of the book is available with the function from the database
    if(librarydatabase.checkBookAvailability(bookNameTemp)==true)
    {
        //show th dilaog window
        emailDialog.show();

        //check if the OK button on the dialog was clicked
        if(emailDialog.exec()==QDialog::Accepted)
        {
            //getting email value from the dialog
            QString emailTemp=emailDialog.getEmailTemp();
            //calling databse functions
            librarydatabase.requestBook(emailTemp, bookNameTemp);
            librarydatabase.setBookUnavailable(bookNameTemp);
            //close dialog
            emailDialog.close();

            //notifying user
            QMessageBox msgBox;
            msgBox.setText("Request sent!\nPlease collect the book at your local library");;
            msgBox.exec();
        }
    }


    else
    {
        //notifying user if the book is unavalibale
        QMessageBox mb;
        mb.setText("Sorry, the book is currently unavailable!");
        mb.exec();

        //open dialog window
        resDialog.show();


        //qDebug()<<emailTemp;
        qDebug()<< resDialog.getDate();
        //executing gialog and checking if it is accepted
        if (resDialog.exec()==QDialog::Accepted)
            {
            //getting value
            QString dateTemp = resDialog.getDate();
            QString emailTemp=resDialog.getEmailTemp();

                QString reserveValue = emailTemp + " | " +dateTemp;
                qDebug()<<reserveValue;

                //calling functions from the database
                librarydatabase.setBookReservation(reserveValue, bookNameTemp);
                librarydatabase.reserveBook(emailTemp, bookNameTemp);
                //notifying user
                QMessageBox msgBox;
                msgBox.setText("The book is reserved!");;
                msgBox.exec();

            }

    }

        ui->bookInfoWidget->hide();

}





void MemberWidget::on_accountSettingsButton_clicked()
{
    accDialog.show();
    if (accDialog.exec()==QDialog::Accepted)
    {

        QString email = accDialog.getEmailAccount();
        QString pswd = accDialog.getPswd();
        librarydatabase.changePassword(email, pswd);
        QMessageBox msgBox;
        msgBox.setText("Your password has been successfully changed!");;
        msgBox.exec();
    }

}


void MemberWidget::on_yourBooksPushButton_clicked()
{
    QMessageBox mb;
    mb.setText("Sorry, current feature us under maintenance!");
    mb.exec();
}


void MemberWidget::on_lesMisButton_clicked()
{
    QPixmap pix2("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/lesMiserables");

    librarydatabase.findBookByName("Les Miserables");
    ui->bookNameLabel->setText("Les Miserables");
    ui->bookAuthorLabel->setText(librarydatabase.getBookAuthor());
    ui->bookDescLabel->setText(librarydatabase.getBookDescription());
    ui->bookInfoWidget->show();
}


void MemberWidget::on_blackTulipButton_clicked()
{
    QPixmap pix3("C:/Users/karpo/Desktop/Library_Info_Sys/QTLibrary/picAssets/blackTulip");

    librarydatabase.findBookByName("The Black Tulip");
    ui->bookNameLabel->setText("The Black Tulip");
    ui->bookAuthorLabel->setText(librarydatabase.getBookAuthor());
    ui->bookDescLabel->setText(librarydatabase.getBookDescription());
    ui->bookInfoWidget->show();
}

