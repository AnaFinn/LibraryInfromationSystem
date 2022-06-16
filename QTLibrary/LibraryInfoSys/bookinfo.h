#ifndef BOOKINFO_H
#define BOOKINFO_H

#include <QMainWindow>

namespace Ui {
class BookInfo;
}

class BookInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookInfo(QWidget *parent = nullptr);
    ~BookInfo();

private:
    Ui::BookInfo *ui;
};

#endif // BOOKINFO_H
