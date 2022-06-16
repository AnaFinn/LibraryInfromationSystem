#ifndef LANDINGWIDGET_H
#define LANDINGWIDGET_H

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
class LandingWidget;
}

class LandingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LandingWidget(QWidget *parent = nullptr);
    ~LandingWidget();



signals:
    void logInData(QString name, QString pswd, QString email, int n);
    void signUpMove();

public slots:
    void logInValidation();

private slots:

    void signUpClicked();

private:
    Ui::LandingWidget *ui;
    LibraryDataBase *libraryDatabase;
};

#endif // LANDINGWIDGET_H
