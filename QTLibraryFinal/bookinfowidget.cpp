#include "bookinfowidget.h"
#include "ui_bookinfowidget.h"

BookInfoWidget::BookInfoWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookInfoWidget)
{
    ui->setupUi(this);
}

BookInfoWidget::~BookInfoWidget()
{
    delete ui;
}
