/********************************************************************************
** Form generated from reading UI file 'emaildialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAILDIALOG_H
#define UI_EMAILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_EmailDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *emailConfirmLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EmailDialog)
    {
        if (EmailDialog->objectName().isEmpty())
            EmailDialog->setObjectName(QString::fromUtf8("EmailDialog"));
        EmailDialog->resize(442, 224);
        EmailDialog->setStyleSheet(QString::fromUtf8("font-family:Arial;\n"
"font:bold;\n"
"font-size:20px;"));
        gridLayout = new QGridLayout(EmailDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(EmailDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        emailConfirmLineEdit = new QLineEdit(EmailDialog);
        emailConfirmLineEdit->setObjectName(QString::fromUtf8("emailConfirmLineEdit"));
        emailConfirmLineEdit->setMinimumSize(QSize(0, 40));
        emailConfirmLineEdit->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 10px;\n"
"background-color:#D9D9D9;\n"
""));

        gridLayout->addWidget(emailConfirmLineEdit, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(EmailDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"background-color:#D68243;\n"
""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(EmailDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EmailDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EmailDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EmailDialog);
    } // setupUi

    void retranslateUi(QDialog *EmailDialog)
    {
        EmailDialog->setWindowTitle(QCoreApplication::translate("EmailDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EmailDialog", "Please, enter your E-mail to continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmailDialog: public Ui_EmailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAILDIALOG_H
