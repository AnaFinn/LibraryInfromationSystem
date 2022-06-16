/********************************************************************************
** Form generated from reading UI file 'bookinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFO_H
#define UI_BOOKINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookInfo
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLabel *bookPictureLabel;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BookInfo)
    {
        if (BookInfo->objectName().isEmpty())
            BookInfo->setObjectName(QString::fromUtf8("BookInfo"));
        BookInfo->resize(694, 445);
        centralwidget = new QWidget(BookInfo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 310, 136, 42));
        pushButton_2->setMinimumSize(QSize(136, 42));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
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
        bookPictureLabel = new QLabel(centralwidget);
        bookPictureLabel->setObjectName(QString::fromUtf8("bookPictureLabel"));
        bookPictureLabel->setGeometry(QRect(30, 40, 235, 317));
        bookPictureLabel->setMinimumSize(QSize(235, 317));
        bookPictureLabel->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 310, 136, 42));
        pushButton->setMinimumSize(QSize(136, 42));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(197, 125, 43);\n"
" border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: #D68243;"));
        BookInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BookInfo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 694, 25));
        BookInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(BookInfo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BookInfo->setStatusBar(statusbar);

        retranslateUi(BookInfo);

        QMetaObject::connectSlotsByName(BookInfo);
    } // setupUi

    void retranslateUi(QMainWindow *BookInfo)
    {
        BookInfo->setWindowTitle(QCoreApplication::translate("BookInfo", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BookInfo", "Cancel", nullptr));
        bookPictureLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("BookInfo", "Request", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookInfo: public Ui_BookInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFO_H
