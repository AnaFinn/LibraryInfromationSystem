#ifndef MEMBERWIDGET_H
#define MEMBERWIDGET_H

#include <QWidget>
#include <QObject>
#include <QMessageBox>
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include "librarydatabase.h"



namespace Ui {
class MemberWidget;
}

class MemberWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MemberWidget(QWidget *parent = nullptr);
    ~MemberWidget();

public slots:



private slots:
    void on_browsePushButton_clicked();

    void on_browsePushButton_2_clicked();

    void on_searchButton_clicked();

    void on_hobbitButton_clicked();

    void on_requestButton_clicked();

private:
    Ui::MemberWidget *ui;
    //QString usernameCurrent;

//QString usernameCurrent;
    LibraryDataBase librarydatabase;




};

#endif // MEMBERWIDGET_H
