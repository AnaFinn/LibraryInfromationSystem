#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "landingwidget.h"
#include "signupwidget.h"
#include "librarydatabase.h"
#include "memberwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void signUpPage();
    void logInPage();
    void memberPage();

private:
    Ui::MainWindow *ui;

    LandingWidget landingWidget;
    SignUpWidget signUpWidget;
    LibraryDataBase libraryDataBase;
    MemberWidget memberWidget;
};

#endif // MAINWINDOW_H
