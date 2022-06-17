#include "memberwidget.h"
#include "ui_memberwidget.h"

MemberWidget::MemberWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MemberWidget)
{
    ui->setupUi(this);
   // ui->userNameLabel->setText(librarydatabase.getNameFromDB());
}

MemberWidget::~MemberWidget()
{
    delete ui;
}

//void MemberWidget::memberLoggedIn(QString email)
//{

//}
