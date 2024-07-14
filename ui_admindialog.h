/********************************************************************************
** Form generated from reading UI file 'admindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QLabel *label_padmin;
    QLabel *label;
    QPushButton *contacts;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName("AdminDialog");
        AdminDialog->resize(761, 359);
        label_padmin = new QLabel(AdminDialog);
        label_padmin->setObjectName("label_padmin");
        label_padmin->setGeometry(QRect(270, 70, 141, 101));
        label = new QLabel(AdminDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 20, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font.setPointSize(13);
        font.setItalic(true);
        label->setFont(font);
        contacts = new QPushButton(AdminDialog);
        contacts->setObjectName("contacts");
        contacts->setGeometry(QRect(290, 200, 89, 25));

        retranslateUi(AdminDialog);

        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QCoreApplication::translate("AdminDialog", "Dialog", nullptr));
        label_padmin->setText(QString());
        label->setText(QCoreApplication::translate("AdminDialog", "Welcome Admin", nullptr));
        contacts->setText(QCoreApplication::translate("AdminDialog", "Contacts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
