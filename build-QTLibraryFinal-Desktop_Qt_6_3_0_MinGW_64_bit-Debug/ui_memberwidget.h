/********************************************************************************
** Form generated from reading UI file 'memberwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERWIDGET_H
#define UI_MEMBERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberWidget
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *hobbitButton;
    QPushButton *lesMisButton;
    QPushButton *blackTulipButton;
    QPushButton *warButton;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *lotrButton;
    QPushButton *duneButton;
    QPushButton *annaButton;
    QPushButton *orwellButton;
    QTableView *tableView;
    QWidget *bookInfoWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_11;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *bookNameLabel;
    QLabel *bookAuthorLabel;
    QLabel *bookDescLabel;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *requestButton;
    QPushButton *cancelButton;
    QLabel *picLabel5;
    QLabel *picLabel2;
    QLabel *picLabel1;
    QLabel *picLabel3;
    QLabel *picLabel4;
    QLabel *picLabel6;
    QLabel *picLabel7;
    QLabel *picLabel8;
    QWidget *widget_9;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *accountSettingsButton;
    QLabel *userNameLabel;
    QWidget *widget3;
    QWidget *widget4;
    QVBoxLayout *verticalLayout;
    QPushButton *browsePushButton_2;
    QPushButton *browsePushButton;
    QPushButton *yourBooksPushButton;

    void setupUi(QWidget *MemberWidget)
    {
        if (MemberWidget->objectName().isEmpty())
            MemberWidget->setObjectName(QString::fromUtf8("MemberWidget"));
        MemberWidget->resize(960, 519);
        MemberWidget->setStyleSheet(QString::fromUtf8("background:white;\n"
"font-family: Arial;\n"
"color:black;\n"
""));
        groupBox_2 = new QGroupBox(MemberWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(210, 50, 691, 630));
        groupBox_2->setStyleSheet(QString::fromUtf8("border-style:outset;\n"
"border-color:blue;"));
        groupBox_2->setFlat(false);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 320, 151, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        label_2->setFont(font);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 111, 20));
        label->setFont(font);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 270, 121, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:#C3C3C3;\n"
""));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 270, 121, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:#C3C3C3;\n"
""));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 270, 131, 20));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color:#C3C3C3;\n"
""));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(540, 270, 121, 20));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color:#C3C3C3;\n"
""));
        label_6->setAlignment(Qt::AlignCenter);
        hobbitButton = new QPushButton(groupBox_2);
        hobbitButton->setObjectName(QString::fromUtf8("hobbitButton"));
        hobbitButton->setGeometry(QRect(30, 240, 121, 29));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setBold(true);
        hobbitButton->setFont(font2);
        hobbitButton->setFlat(true);
        lesMisButton = new QPushButton(groupBox_2);
        lesMisButton->setObjectName(QString::fromUtf8("lesMisButton"));
        lesMisButton->setGeometry(QRect(200, 240, 121, 29));
        lesMisButton->setFont(font2);
        lesMisButton->setFlat(true);
        blackTulipButton = new QPushButton(groupBox_2);
        blackTulipButton->setObjectName(QString::fromUtf8("blackTulipButton"));
        blackTulipButton->setGeometry(QRect(370, 240, 121, 29));
        blackTulipButton->setFont(font2);
        blackTulipButton->setFlat(true);
        warButton = new QPushButton(groupBox_2);
        warButton->setObjectName(QString::fromUtf8("warButton"));
        warButton->setGeometry(QRect(540, 240, 121, 29));
        warButton->setFont(font2);
        warButton->setFlat(true);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(540, 550, 121, 20));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color:#C3C3C3;\n"
""));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 550, 121, 20));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color:#C3C3C3;\n"
""));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(200, 560, 121, 31));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color:#C3C3C3;\n"
""));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(370, 550, 121, 20));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color:#C3C3C3;\n"
""));
        label_14->setAlignment(Qt::AlignCenter);
        lotrButton = new QPushButton(groupBox_2);
        lotrButton->setObjectName(QString::fromUtf8("lotrButton"));
        lotrButton->setGeometry(QRect(200, 520, 121, 41));
        lotrButton->setFont(font2);
        lotrButton->setFlat(true);
        duneButton = new QPushButton(groupBox_2);
        duneButton->setObjectName(QString::fromUtf8("duneButton"));
        duneButton->setGeometry(QRect(30, 520, 121, 29));
        duneButton->setFont(font2);
        duneButton->setFlat(true);
        annaButton = new QPushButton(groupBox_2);
        annaButton->setObjectName(QString::fromUtf8("annaButton"));
        annaButton->setGeometry(QRect(370, 520, 121, 29));
        annaButton->setFont(font2);
        annaButton->setFlat(true);
        orwellButton = new QPushButton(groupBox_2);
        orwellButton->setObjectName(QString::fromUtf8("orwellButton"));
        orwellButton->setGeometry(QRect(540, 520, 121, 29));
        orwellButton->setFont(font2);
        orwellButton->setFlat(true);
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 10, 751, 601));
        tableView->setStyleSheet(QString::fromUtf8(" selection-background-color: \n"
"qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0))"));
        bookInfoWidget = new QWidget(groupBox_2);
        bookInfoWidget->setObjectName(QString::fromUtf8("bookInfoWidget"));
        bookInfoWidget->setGeometry(QRect(10, 20, 761, 361));
        bookInfoWidget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        widget = new QWidget(bookInfoWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 30, 581, 261));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_11 = new QWidget(widget);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setMinimumSize(QSize(200, 0));
        widget_11->setMaximumSize(QSize(200, 16777215));
        widget_11->setStyleSheet(QString::fromUtf8("background:#0F7C8A;\n"
"border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 16px;"));
        label_7 = new QLabel(widget_11);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 70, 161, 111));
        label_7->setStyleSheet(QString::fromUtf8("font: bold;\n"
"font-size:24px;\n"
"color:#D68243;"));

        horizontalLayout->addWidget(widget_11);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bookNameLabel = new QLabel(widget);
        bookNameLabel->setObjectName(QString::fromUtf8("bookNameLabel"));
        bookNameLabel->setMaximumSize(QSize(16777215, 30));
        bookNameLabel->setStyleSheet(QString::fromUtf8("\n"
"font-size:32px;"));

        verticalLayout_2->addWidget(bookNameLabel);

        bookAuthorLabel = new QLabel(widget);
        bookAuthorLabel->setObjectName(QString::fromUtf8("bookAuthorLabel"));
        bookAuthorLabel->setMinimumSize(QSize(20, 0));
        bookAuthorLabel->setMaximumSize(QSize(1010001, 45));
        bookAuthorLabel->setStyleSheet(QString::fromUtf8("font-size:24px;"));

        verticalLayout_2->addWidget(bookAuthorLabel);

        bookDescLabel = new QLabel(widget);
        bookDescLabel->setObjectName(QString::fromUtf8("bookDescLabel"));
        bookDescLabel->setStyleSheet(QString::fromUtf8("font-size:16px;"));
        bookDescLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(bookDescLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        widget1 = new QWidget(bookInfoWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(460, 300, 171, 42));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        requestButton = new QPushButton(widget1);
        requestButton->setObjectName(QString::fromUtf8("requestButton"));
        requestButton->setMinimumSize(QSize(0, 32));
        requestButton->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"background-color:#D68243;\n"
"color:white;\n"
"font:bold;\n"
""));

        horizontalLayout_2->addWidget(requestButton);

        cancelButton = new QPushButton(widget1);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(0, 32));
        cancelButton->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color:#0F7C8A;\n"
"background-color:white;\n"
"color:#0F7C8A;\n"
"font:bold;\n"
""));

        horizontalLayout_2->addWidget(cancelButton);

        picLabel5 = new QLabel(groupBox_2);
        picLabel5->setObjectName(QString::fromUtf8("picLabel5"));
        picLabel5->setGeometry(QRect(30, 360, 120, 160));
        picLabel5->setAutoFillBackground(false);
        picLabel5->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        picLabel2 = new QLabel(groupBox_2);
        picLabel2->setObjectName(QString::fromUtf8("picLabel2"));
        picLabel2->setGeometry(QRect(200, 80, 120, 160));
        picLabel2->setAutoFillBackground(false);
        picLabel2->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        picLabel1 = new QLabel(groupBox_2);
        picLabel1->setObjectName(QString::fromUtf8("picLabel1"));
        picLabel1->setGeometry(QRect(30, 80, 121, 160));
        picLabel1->setAutoFillBackground(false);
        picLabel1->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        picLabel3 = new QLabel(groupBox_2);
        picLabel3->setObjectName(QString::fromUtf8("picLabel3"));
        picLabel3->setGeometry(QRect(370, 80, 120, 160));
        picLabel3->setAutoFillBackground(false);
        picLabel3->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        picLabel4 = new QLabel(groupBox_2);
        picLabel4->setObjectName(QString::fromUtf8("picLabel4"));
        picLabel4->setGeometry(QRect(540, 80, 120, 160));
        picLabel4->setAutoFillBackground(false);
        picLabel4->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        picLabel6 = new QLabel(groupBox_2);
        picLabel6->setObjectName(QString::fromUtf8("picLabel6"));
        picLabel6->setGeometry(QRect(200, 360, 120, 160));
        picLabel6->setAutoFillBackground(false);
        picLabel6->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        picLabel7 = new QLabel(groupBox_2);
        picLabel7->setObjectName(QString::fromUtf8("picLabel7"));
        picLabel7->setGeometry(QRect(370, 360, 120, 160));
        picLabel7->setAutoFillBackground(false);
        picLabel7->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        picLabel8 = new QLabel(groupBox_2);
        picLabel8->setObjectName(QString::fromUtf8("picLabel8"));
        picLabel8->setGeometry(QRect(540, 360, 120, 160));
        picLabel8->setAutoFillBackground(false);
        picLabel8->setStyleSheet(QString::fromUtf8(" border-style: inset;\n"
"border-color:#0F7C8A;\n"
"    border-width: 4px;\n"
"    border-radius: 10px;"));
        picLabel6->raise();
        picLabel7->raise();
        picLabel8->raise();
        picLabel4->raise();
        picLabel2->raise();
        picLabel3->raise();
        picLabel5->raise();
        picLabel1->raise();
        label_2->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        hobbitButton->raise();
        lesMisButton->raise();
        blackTulipButton->raise();
        warButton->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        lotrButton->raise();
        duneButton->raise();
        annaButton->raise();
        orwellButton->raise();
        tableView->raise();
        bookInfoWidget->raise();
        widget_9 = new QWidget(MemberWidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(0, -10, 961, 71));
        widget_9->setStyleSheet(QString::fromUtf8("background-color:#FFAA69;"));
        searchLineEdit = new QLineEdit(widget_9);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(240, 20, 241, 41));
        searchLineEdit->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 20px;\n"
""));
        searchButton = new QPushButton(widget_9);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(440, 20, 41, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/picAssets/search.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);
        searchButton->setFlat(true);
        widget2 = new QWidget(widget_9);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(761, 20, 151, 41));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        accountSettingsButton = new QPushButton(widget2);
        accountSettingsButton->setObjectName(QString::fromUtf8("accountSettingsButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/picAssets/accountPic.png"), QSize(), QIcon::Normal, QIcon::Off);
        accountSettingsButton->setIcon(icon1);
        accountSettingsButton->setFlat(true);

        horizontalLayout_3->addWidget(accountSettingsButton);

        userNameLabel = new QLabel(widget2);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setStyleSheet(QString::fromUtf8("font:bold;\n"
"color:white;"));

        horizontalLayout_3->addWidget(userNameLabel);

        userNameLabel->raise();
        accountSettingsButton->raise();
        searchLineEdit->raise();
        searchButton->raise();
        widget3 = new QWidget(MemberWidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(0, 0, 961, 700));
        widget4 = new QWidget(widget3);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(60, 90, 98, 104));
        verticalLayout = new QVBoxLayout(widget4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        browsePushButton_2 = new QPushButton(widget4);
        browsePushButton_2->setObjectName(QString::fromUtf8("browsePushButton_2"));
        browsePushButton_2->setMaximumSize(QSize(45, 16777215));
        browsePushButton_2->setStyleSheet(QString::fromUtf8("font:bold;\n"
"font-size: 16px;"));
        browsePushButton_2->setFlat(true);

        verticalLayout->addWidget(browsePushButton_2);

        browsePushButton = new QPushButton(widget4);
        browsePushButton->setObjectName(QString::fromUtf8("browsePushButton"));
        browsePushButton->setMaximumSize(QSize(84, 16777215));
        browsePushButton->setStyleSheet(QString::fromUtf8("font:bold; font-size: 16px;"));
        browsePushButton->setFlat(true);

        verticalLayout->addWidget(browsePushButton);

        yourBooksPushButton = new QPushButton(widget4);
        yourBooksPushButton->setObjectName(QString::fromUtf8("yourBooksPushButton"));
        yourBooksPushButton->setMaximumSize(QSize(89, 16777215));
        yourBooksPushButton->setStyleSheet(QString::fromUtf8("font:bold; font-size: 16px;"));
        yourBooksPushButton->setFlat(true);

        verticalLayout->addWidget(yourBooksPushButton);

        browsePushButton->raise();
        browsePushButton_2->raise();
        yourBooksPushButton->raise();
        widget3->raise();
        groupBox_2->raise();
        widget_9->raise();
        browsePushButton->raise();
        yourBooksPushButton->raise();
        browsePushButton_2->raise();

        retranslateUi(MemberWidget);

        cancelButton->setDefault(false);


        QMetaObject::connectSlotsByName(MemberWidget);
    } // setupUi

    void retranslateUi(QWidget *MemberWidget)
    {
        MemberWidget->setWindowTitle(QCoreApplication::translate("MemberWidget", "Form", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MemberWidget", "You may also like", nullptr));
        label->setText(QCoreApplication::translate("MemberWidget", "New arrivals", nullptr));
        label_3->setText(QCoreApplication::translate("MemberWidget", "J. R. R. Tolkien", nullptr));
        label_4->setText(QCoreApplication::translate("MemberWidget", "Victor Hugo", nullptr));
        label_5->setText(QCoreApplication::translate("MemberWidget", "Alexandre Dumas", nullptr));
        label_6->setText(QCoreApplication::translate("MemberWidget", "Leo Tolstoy", nullptr));
        hobbitButton->setText(QCoreApplication::translate("MemberWidget", "The Hobbit", nullptr));
        lesMisButton->setText(QCoreApplication::translate("MemberWidget", "Les Miserables", nullptr));
        blackTulipButton->setText(QCoreApplication::translate("MemberWidget", "The Black Tulip", nullptr));
        warButton->setText(QCoreApplication::translate("MemberWidget", "War and Peace", nullptr));
        label_11->setText(QCoreApplication::translate("MemberWidget", "George Orwell", nullptr));
        label_12->setText(QCoreApplication::translate("MemberWidget", "Frank Herbert", nullptr));
        label_13->setText(QCoreApplication::translate("MemberWidget", "J. R. R. Tolkien", nullptr));
        label_14->setText(QCoreApplication::translate("MemberWidget", "Leo Tolstoy", nullptr));
        lotrButton->setText(QCoreApplication::translate("MemberWidget", "The Lord of\342\200\250the Rings", nullptr));
        duneButton->setText(QCoreApplication::translate("MemberWidget", "Dune", nullptr));
        annaButton->setText(QCoreApplication::translate("MemberWidget", "Anna Karenina", nullptr));
        orwellButton->setText(QCoreApplication::translate("MemberWidget", "1984", nullptr));
        label_7->setText(QCoreApplication::translate("MemberWidget", "<html><head/><body><p align=\"center\">Book cover</p><p align=\"center\">placeholder</p></body></html>", nullptr));
        bookNameLabel->setText(QCoreApplication::translate("MemberWidget", "TextLabel", nullptr));
        bookAuthorLabel->setText(QCoreApplication::translate("MemberWidget", "TextLabel", nullptr));
        bookDescLabel->setText(QCoreApplication::translate("MemberWidget", "TextLabel", nullptr));
        requestButton->setText(QCoreApplication::translate("MemberWidget", "Request", nullptr));
        cancelButton->setText(QCoreApplication::translate("MemberWidget", "Cancel", nullptr));
        picLabel5->setText(QString());
        picLabel2->setText(QString());
        picLabel1->setText(QString());
        picLabel3->setText(QString());
        picLabel4->setText(QString());
        picLabel6->setText(QString());
        picLabel7->setText(QString());
        picLabel8->setText(QString());
        searchButton->setText(QString());
        accountSettingsButton->setText(QString());
        userNameLabel->setText(QCoreApplication::translate("MemberWidget", "TextLabel", nullptr));
        browsePushButton_2->setText(QCoreApplication::translate("MemberWidget", "Home", nullptr));
        browsePushButton->setText(QCoreApplication::translate("MemberWidget", "Browse All", nullptr));
        yourBooksPushButton->setText(QCoreApplication::translate("MemberWidget", "Your books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberWidget: public Ui_MemberWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERWIDGET_H
