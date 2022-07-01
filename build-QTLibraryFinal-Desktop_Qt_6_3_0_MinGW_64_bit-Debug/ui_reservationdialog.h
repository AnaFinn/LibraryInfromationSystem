/********************************************************************************
** Form generated from reading UI file 'reservationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATIONDIALOG_H
#define UI_RESERVATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ReservationDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QLineEdit *emaiLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ReservationDialog)
    {
        if (ReservationDialog->objectName().isEmpty())
            ReservationDialog->setObjectName(QString::fromUtf8("ReservationDialog"));
        ReservationDialog->resize(697, 311);
        ReservationDialog->setStyleSheet(QString::fromUtf8("font-family:Arial;"));
        formLayout = new QFormLayout(ReservationDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(ReservationDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font:bold;\n"
"color:#0F7C8A;\n"
"font-size:24px;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        calendarWidget = new QCalendarWidget(ReservationDialog);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setMinimumSize(QSize(0, 0));
        calendarWidget->setMaximumSize(QSize(350, 16777215));

        formLayout->setWidget(1, QFormLayout::LabelRole, calendarWidget);

        label = new QLabel(ReservationDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label);

        emaiLineEdit = new QLineEdit(ReservationDialog);
        emaiLineEdit->setObjectName(QString::fromUtf8("emaiLineEdit"));
        emaiLineEdit->setMinimumSize(QSize(0, 35));
        emaiLineEdit->setStyleSheet(QString::fromUtf8(" border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 10px;\n"
"background-color:gray;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, emaiLineEdit);

        buttonBox = new QDialogButtonBox(ReservationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonBox);


        retranslateUi(ReservationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ReservationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ReservationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ReservationDialog);
    } // setupUi

    void retranslateUi(QDialog *ReservationDialog)
    {
        ReservationDialog->setWindowTitle(QCoreApplication::translate("ReservationDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ReservationDialog", "Online reservation", nullptr));
        label->setText(QCoreApplication::translate("ReservationDialog", "Library members can reserve up to 2 books\n"
"at any one time. Reservations will be purged\n"
"3 days after an item has been assigned\n"
"to a member.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReservationDialog: public Ui_ReservationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATIONDIALOG_H
