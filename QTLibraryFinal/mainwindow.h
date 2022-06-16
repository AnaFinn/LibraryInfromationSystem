#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "landingwidget.h"
#include "signupwidget.h"
#include "librarydatabase.h"

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

private:
    Ui::MainWindow *ui;

    LandingWidget landingWidget;
    SignUpWidget signUpWidget;
    LibraryDataBase libraryDataBase;
};

#endif // MAINWINDOW_H
