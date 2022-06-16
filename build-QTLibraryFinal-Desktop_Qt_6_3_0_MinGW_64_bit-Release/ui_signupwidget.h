/********************************************************************************
** Form generated from reading UI file 'signupwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWIDGET_H
#define UI_SIGNUPWIDGET_H

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

class Ui_SignUpWidget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *headreLabel;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *nameLineEdit;
    QVBoxLayout *verticalLayout;
    QLineEdit *mailLineEdit;
    QLineEdit *pswdLineEdit;
    QLineEdit *confirmPswdLineEdit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *memberRadioButton;
    QRadioButton *adminRadiButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QPushButton *createAccountButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *logInButton;
    QSpacerItem *verticalSpacer_4;
    QLabel *picLabel;

    void setupUi(QWidget *SignUpWidget)
    {
        if (SignUpWidget->objectName().isEmpty())
            SignUpWidget->setObjectName(QString::fromUtf8("SignUpWidget"));
        SignUpWidget->resize(960, 650);
        layoutWidget = new QWidget(SignUpWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 100, 790, 503));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(400, 501));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        headreLabel = new QLabel(groupBox);
        headreLabel->setObjectName(QString::fromUtf8("headreLabel"));
        headreLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(headreLabel);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_2);

        nameLineEdit = new QLineEdit(groupBox);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(301, 41));

        verticalLayout_3->addWidget(nameLineEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mailLineEdit = new QLineEdit(groupBox);
        mailLineEdit->setObjectName(QString::fromUtf8("mailLineEdit"));
        mailLineEdit->setMinimumSize(QSize(301, 41));

        verticalLayout->addWidget(mailLineEdit);

        pswdLineEdit = new QLineEdit(groupBox);
        pswdLineEdit->setObjectName(QString::fromUtf8("pswdLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pswdLineEdit->sizePolicy().hasHeightForWidth());
        pswdLineEdit->setSizePolicy(sizePolicy1);
        pswdLineEdit->setMinimumSize(QSize(301, 41));

        verticalLayout->addWidget(pswdLineEdit);

        confirmPswdLineEdit = new QLineEdit(groupBox);
        confirmPswdLineEdit->setObjectName(QString::fromUtf8("confirmPswdLineEdit"));
        sizePolicy1.setHeightForWidth(confirmPswdLineEdit->sizePolicy().hasHeightForWidth());
        confirmPswdLineEdit->setSizePolicy(sizePolicy1);
        confirmPswdLineEdit->setMinimumSize(QSize(301, 41));

        verticalLayout->addWidget(confirmPswdLineEdit);

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


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        createAccountButton = new QPushButton(groupBox);
        createAccountButton->setObjectName(QString::fromUtf8("createAccountButton"));
        createAccountButton->setMinimumSize(QSize(301, 41));

        verticalLayout_2->addWidget(createAccountButton);


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

        logInButton = new QPushButton(groupBox);
        logInButton->setObjectName(QString::fromUtf8("logInButton"));
        logInButton->setMaximumSize(QSize(59, 29));
        logInButton->setFlat(true);

        horizontalLayout_2->addWidget(logInButton);


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

        horizontalLayout_4->addWidget(picLabel);


        retranslateUi(SignUpWidget);

        QMetaObject::connectSlotsByName(SignUpWidget);
    } // setupUi

    void retranslateUi(QWidget *SignUpWidget)
    {
        SignUpWidget->setWindowTitle(QCoreApplication::translate("SignUpWidget", "Form", nullptr));
        groupBox->setTitle(QString());
        headreLabel->setText(QCoreApplication::translate("SignUpWidget", "Sign up", nullptr));
        nameLineEdit->setText(QString());
        mailLineEdit->setText(QString());
        pswdLineEdit->setText(QString());
        confirmPswdLineEdit->setText(QString());
        memberRadioButton->setText(QCoreApplication::translate("SignUpWidget", "Member", nullptr));
        adminRadiButton->setText(QCoreApplication::translate("SignUpWidget", "Admin", nullptr));
        createAccountButton->setText(QCoreApplication::translate("SignUpWidget", "Creat an account", nullptr));
        label->setText(QCoreApplication::translate("SignUpWidget", "Already a member?", nullptr));
        logInButton->setText(QCoreApplication::translate("SignUpWidget", "Log In", nullptr));
        picLabel->setText(QCoreApplication::translate("SignUpWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWidget: public Ui_SignUpWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWIDGET_H
