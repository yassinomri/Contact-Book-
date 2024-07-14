/********************************************************************************
** Form generated from reading UI file 'userdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDIALOG_H
#define UI_USERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserDialog
{
public:
    QLabel *label;
    QLabel *label_puser;
    QPushButton *appel;

    void setupUi(QDialog *UserDialog)
    {
        if (UserDialog->objectName().isEmpty())
            UserDialog->setObjectName("UserDialog");
        UserDialog->resize(753, 353);
        label = new QLabel(UserDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 0, 201, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Mono")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label_puser = new QLabel(UserDialog);
        label_puser->setObjectName("label_puser");
        label_puser->setGeometry(QRect(270, 50, 111, 91));
        appel = new QPushButton(UserDialog);
        appel->setObjectName("appel");
        appel->setGeometry(QRect(270, 210, 131, 41));

        retranslateUi(UserDialog);

        QMetaObject::connectSlotsByName(UserDialog);
    } // setupUi

    void retranslateUi(QDialog *UserDialog)
    {
        UserDialog->setWindowTitle(QCoreApplication::translate("UserDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UserDialog", "Welcome User", nullptr));
        label_puser->setText(QString());
        appel->setText(QCoreApplication::translate("UserDialog", "Appel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDialog: public Ui_UserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDIALOG_H
