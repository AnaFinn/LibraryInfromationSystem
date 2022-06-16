/********************************************************************************
** Form generated from reading UI file 'bookinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFOWIDGET_H
#define UI_BOOKINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookInfoWidget
{
public:

    void setupUi(QWidget *BookInfoWidget)
    {
        if (BookInfoWidget->objectName().isEmpty())
            BookInfoWidget->setObjectName(QString::fromUtf8("BookInfoWidget"));
        BookInfoWidget->resize(701, 454);

        retranslateUi(BookInfoWidget);

        QMetaObject::connectSlotsByName(BookInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *BookInfoWidget)
    {
        BookInfoWidget->setWindowTitle(QCoreApplication::translate("BookInfoWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookInfoWidget: public Ui_BookInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFOWIDGET_H
