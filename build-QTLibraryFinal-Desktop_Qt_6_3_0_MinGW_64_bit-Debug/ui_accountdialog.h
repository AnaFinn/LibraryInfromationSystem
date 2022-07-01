/********************************************************************************
** Form generated from reading UI file 'accountdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTDIALOG_H
#define UI_ACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QLabel *userNameLabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *signOutPushButton;
    QWidget *widgetPass;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *newPswdLabel;
    QLabel *newPswdLabel_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *pswdLineEdit;
    QLineEdit *pswdLineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AccountDialog)
    {
        if (AccountDialog->objectName().isEmpty())
            AccountDialog->setObjectName(QString::fromUtf8("AccountDialog"));
        AccountDialog->resize(508, 320);
        AccountDialog->setMaximumSize(QSize(16777215, 320));
        AccountDialog->setStyleSheet(QString::fromUtf8("font:bold;\n"
""));
        gridLayout = new QGridLayout(AccountDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AccountDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 174));
        label->setStyleSheet(QString::fromUtf8("\n"
"border-width:2px;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        userNameLabel = new QLabel(AccountDialog);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setStyleSheet(QString::fromUtf8("font-size:25px;"));

        verticalLayout_3->addWidget(userNameLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(AccountDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 10px;\n"
"background-color:#0F7C8A;\n"
"color:white;\n"
""));

        horizontalLayout_2->addWidget(pushButton);

        signOutPushButton = new QPushButton(AccountDialog);
        signOutPushButton->setObjectName(QString::fromUtf8("signOutPushButton"));
        signOutPushButton->setMinimumSize(QSize(0, 30));
        signOutPushButton->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"border-color:#D68243;\n"
"background-color:white;\n"
"color:#D68243;\n"
""));

        horizontalLayout_2->addWidget(signOutPushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        widgetPass = new QWidget(AccountDialog);
        widgetPass->setObjectName(QString::fromUtf8("widgetPass"));
        verticalLayout_4 = new QVBoxLayout(widgetPass);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        newPswdLabel = new QLabel(widgetPass);
        newPswdLabel->setObjectName(QString::fromUtf8("newPswdLabel"));
        newPswdLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(newPswdLabel);

        newPswdLabel_2 = new QLabel(widgetPass);
        newPswdLabel_2->setObjectName(QString::fromUtf8("newPswdLabel_2"));
        newPswdLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(newPswdLabel_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pswdLineEdit = new QLineEdit(widgetPass);
        pswdLineEdit->setObjectName(QString::fromUtf8("pswdLineEdit"));
        pswdLineEdit->setMinimumSize(QSize(0, 30));
        pswdLineEdit->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 10px;\n"
"background-color: #e6e6e6;"));

        verticalLayout_2->addWidget(pswdLineEdit);

        pswdLineEdit_2 = new QLineEdit(widgetPass);
        pswdLineEdit_2->setObjectName(QString::fromUtf8("pswdLineEdit_2"));
        pswdLineEdit_2->setMinimumSize(QSize(0, 30));
        pswdLineEdit_2->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 10px;\n"
"background-color: #e6e6e6;"));

        verticalLayout_2->addWidget(pswdLineEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(280, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(widgetPass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(50, 30));
        pushButton_2->setMaximumSize(QSize(157, 16777215));
        pushButton_2->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 10px;\n"
"background-color:#0F7C8A;\n"
"color:white;\n"
""));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(widgetPass);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("\n"
"background-color:#0F7C8A;\n"
"\n"
""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        gridLayout->addWidget(widgetPass, 1, 0, 1, 2);


        retranslateUi(AccountDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AccountDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AccountDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AccountDialog);
    } // setupUi

    void retranslateUi(QDialog *AccountDialog)
    {
        AccountDialog->setWindowTitle(QCoreApplication::translate("AccountDialog", "Dialog", nullptr));
        label->setText(QString());
        userNameLabel->setText(QCoreApplication::translate("AccountDialog", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("AccountDialog", "Edit", nullptr));
        signOutPushButton->setText(QCoreApplication::translate("AccountDialog", "Sign out", nullptr));
        newPswdLabel->setText(QCoreApplication::translate("AccountDialog", "New password", nullptr));
        newPswdLabel_2->setText(QCoreApplication::translate("AccountDialog", "Confirm password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AccountDialog", "Apply changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountDialog: public Ui_AccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTDIALOG_H
