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

private:
    Ui::MemberWidget *ui;
    QString currentMember;
    LibraryDataBase librarydatabase;


public slots:
    //void memberLoggedIn(QString email);
};

#endif // MEMBERWIDGET_H
