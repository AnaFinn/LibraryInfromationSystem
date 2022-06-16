#ifndef BOOKINFOWIDGET_H
#define BOOKINFOWIDGET_H

#include <QWidget>

namespace Ui {
class BookInfoWidget;
}

class BookInfoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BookInfoWidget(QWidget *parent = nullptr);
    ~BookInfoWidget();

private:
    Ui::BookInfoWidget *ui;
};

#endif // BOOKINFOWIDGET_H
