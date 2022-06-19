#include "memberwidget.h"
#include "ui_memberwidget.h"

MemberWidget::MemberWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MemberWidget)
{

   ui->setupUi(this);
   librarydatabase.showAllUsers();
//   ui->userNameLabel->setText(librarydatabase.getUsername());
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
    ui->bookNameLabel->setText(searchItem);
    ui->bookAuthorLabel->setText(librarydatabase.getBookAuthor());
    ui->bookDescLabel->setText(librarydatabase.getBookDescription());
    ui->bookInfoWidget->show();
    //ui->groupBox_2->hide();


}


void MemberWidget::on_hobbitButton_clicked()
{
    //ui->groupBox_2->hide();
    //QString searchItem = ui->searchLineEdit->text();
    //LibraryDataBase librarydatabase
    librarydatabase.findBookByName("The Hobbit");
    ui->bookNameLabel->setText("The Hobbit");
    ui->bookAuthorLabel->setText(librarydatabase.getBookAuthor());
    ui->bookDescLabel->setText(librarydatabase.getBookDescription());
    ui->bookInfoWidget->show();

}


void MemberWidget::on_requestButton_clicked()
{
    librarydatabase.requestBook("nastyakarpova@gmail.com", "The Hobbit");
}

