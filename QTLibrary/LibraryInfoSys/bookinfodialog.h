#ifndef BOOKINFODIALOG_H
#define BOOKINFODIALOG_H

#include <QDialog>
#include <QObject>
#include <QString>
#include <QStringListModel>
#include <QFile>
#include <QLabel>
#include <QDebug>
#include <QTextStream>
#include <QStringList>
#include <QByteArray>

#include <QDir>

namespace Ui {
class BookInfoDialog;
}

class BookInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BookInfoDialog(QWidget *parent = nullptr);
    ~BookInfoDialog();
   void setBookName(QString bookNameString);
   QString getBookName();
   void bookClicked();


private:
    Ui::BookInfoDialog *ui;

    QLabel *bookName, *bookAuthor, *bookInfo;
    QString bookNameString;
public slots:
    void bookInfoDesign();
};

#endif // BOOKINFODIALOG_H
