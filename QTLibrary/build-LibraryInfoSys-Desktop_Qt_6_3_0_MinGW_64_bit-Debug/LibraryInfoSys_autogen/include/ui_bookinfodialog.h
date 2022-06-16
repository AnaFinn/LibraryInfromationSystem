/********************************************************************************
** Form generated from reading UI file 'bookinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFODIALOG_H
#define UI_BOOKINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookInfoDialog
{
public:
    QLabel *bookPictureLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *BookInfoDialog)
    {
        if (BookInfoDialog->objectName().isEmpty())
            BookInfoDialog->setObjectName(QString::fromUtf8("BookInfoDialog"));
        BookInfoDialog->resize(783, 381);
        bookPictureLabel = new QLabel(BookInfoDialog);
        bookPictureLabel->setObjectName(QString::fromUtf8("bookPictureLabel"));
        bookPictureLabel->setGeometry(QRect(40, 30, 235, 317));
        bookPictureLabel->setMinimumSize(QSize(235, 317));
        bookPictureLabel->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        layoutWidget = new QWidget(BookInfoDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 300, 328, 44));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(136, 42));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(197, 125, 43);\n"
" border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: #D68243;"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(136, 42));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("    background-color:white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: #0F7C8A;\n"
";\n"
"\n"
"\n"
""));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(BookInfoDialog);

        QMetaObject::connectSlotsByName(BookInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *BookInfoDialog)
    {
        BookInfoDialog->setWindowTitle(QCoreApplication::translate("BookInfoDialog", "Dialog", nullptr));
        bookPictureLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("BookInfoDialog", "Request", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BookInfoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookInfoDialog: public Ui_BookInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFODIALOG_H
