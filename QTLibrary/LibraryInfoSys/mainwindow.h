#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include "bookinfodialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    enum Mode { NavigationMode, AddingMode, EditingMode };
private slots:
    void on_hobbitButton_clicked();


    void on_lesMisButton_clicked();

    void on_duneButton_clicked();

private:
    Ui::MainWindow *ui;
    BookInfoDialog *bookInfoDialog;


    void updateInterface(Mode mode);
};
#endif // MAINWINDOW_H
