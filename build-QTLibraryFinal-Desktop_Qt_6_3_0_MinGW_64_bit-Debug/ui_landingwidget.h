/********************************************************************************
** Form generated from reading UI file 'landingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDINGWIDGET_H
#define UI_LANDINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LandingWidget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *headreLabel;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *mailLineEdit;
    QSpacerItem *verticalSpacer;
    QLineEdit *pswdLineEdit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *memberRadioButton;
    QRadioButton *adminRadiButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *forgotPasswordButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *loginButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *signUpButton;
    QSpacerItem *verticalSpacer_4;
    QLabel *picLabel;

    void setupUi(QWidget *LandingWidget)
    {
        if (LandingWidget->objectName().isEmpty())
            LandingWidget->setObjectName(QString::fromUtf8("LandingWidget"));
        LandingWidget->resize(960, 650);
        LandingWidget->setMinimumSize(QSize(960, 570));
        LandingWidget->setStyleSheet(QString::fromUtf8("font-family: Arial;\n"
"\n"
"color:black;\n"
""));
        layoutWidget = new QWidget(LandingWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 80, 790, 503));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(400, 501));
        groupBox->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 16px;"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        headreLabel = new QLabel(groupBox);
        headreLabel->setObjectName(QString::fromUtf8("headreLabel"));
        headreLabel->setStyleSheet(QString::fromUtf8("font: bold;\n"
"color:#0F7C8A;\n"
"font-family: Arial;\n"
"font-size: 30px;"));
        headreLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(headreLabel);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mailLineEdit = new QLineEdit(groupBox);
        mailLineEdit->setObjectName(QString::fromUtf8("mailLineEdit"));
        mailLineEdit->setMinimumSize(QSize(301, 41));
        mailLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: black;\n"
"background-color: #E6E6E6;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"border-color:#E6E6E6;;\n"
"}"));

        verticalLayout->addWidget(mailLineEdit);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        pswdLineEdit = new QLineEdit(groupBox);
        pswdLineEdit->setObjectName(QString::fromUtf8("pswdLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pswdLineEdit->sizePolicy().hasHeightForWidth());
        pswdLineEdit->setSizePolicy(sizePolicy1);
        pswdLineEdit->setMinimumSize(QSize(301, 41));
        pswdLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: black;\n"
"background-color: #E6E6E6;\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"border-color:#E6E6E6;;\n"
"}"));

        verticalLayout->addWidget(pswdLineEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        memberRadioButton = new QRadioButton(groupBox);
        memberRadioButton->setObjectName(QString::fromUtf8("memberRadioButton"));

        horizontalLayout->addWidget(memberRadioButton);

        adminRadiButton = new QRadioButton(groupBox);
        adminRadiButton->setObjectName(QString::fromUtf8("adminRadiButton"));

        horizontalLayout->addWidget(adminRadiButton);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        forgotPasswordButton = new QPushButton(groupBox);
        forgotPasswordButton->setObjectName(QString::fromUtf8("forgotPasswordButton"));
        forgotPasswordButton->setMaximumSize(QSize(136, 21));
        forgotPasswordButton->setFlat(true);

        horizontalLayout->addWidget(forgotPasswordButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_3);

        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setMinimumSize(QSize(301, 41));
        loginButton->setStyleSheet(QString::fromUtf8("\n"
"border-style: outset;\n"
"border-width: 0px;\n"
"border-radius: 10px;\n"
"border-color:#D68243;;\n"
"padding: 0 8 px;\n"
"background:#D68243;\n"
"font: bold 14px;\n"
"color:white;\n"
""));

        verticalLayout_2->addWidget(loginButton);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        signUpButton = new QPushButton(groupBox);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setMaximumSize(QSize(59, 29));
        signUpButton->setFlat(true);

        horizontalLayout_2->addWidget(signUpButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_4->addWidget(groupBox);

        picLabel = new QLabel(layoutWidget);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(5);
        sizePolicy2.setHeightForWidth(picLabel->sizePolicy().hasHeightForWidth());
        picLabel->setSizePolicy(sizePolicy2);
        picLabel->setMinimumSize(QSize(381, 501));
        picLabel->setMaximumSize(QSize(381, 501));
        picLabel->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-style: outset;\n"
"    border-width: 2px;\n"
"border-color:white;\n"
"    border-radius: 16px;"));

        horizontalLayout_4->addWidget(picLabel);

        groupBox->raise();
        picLabel->raise();

        retranslateUi(LandingWidget);

        QMetaObject::connectSlotsByName(LandingWidget);
    } // setupUi

    void retranslateUi(QWidget *LandingWidget)
    {
        LandingWidget->setWindowTitle(QCoreApplication::translate("LandingWidget", "Form", nullptr));
        groupBox->setTitle(QString());
        headreLabel->setText(QCoreApplication::translate("LandingWidget", "Welcome Back!", nullptr));
        mailLineEdit->setText(QString());
        pswdLineEdit->setText(QString());
        memberRadioButton->setText(QCoreApplication::translate("LandingWidget", "Member", nullptr));
        adminRadiButton->setText(QCoreApplication::translate("LandingWidget", "Admin", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("LandingWidget", "Forgot Password?", nullptr));
        loginButton->setText(QCoreApplication::translate("LandingWidget", "Login", nullptr));
        label->setText(QCoreApplication::translate("LandingWidget", "Don't have an account?", nullptr));
        signUpButton->setText(QCoreApplication::translate("LandingWidget", "Sign Up!", nullptr));
        picLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LandingWidget: public Ui_LandingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGWIDGET_H
