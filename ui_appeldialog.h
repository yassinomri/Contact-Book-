/********************************************************************************
** Form generated from reading UI file 'appeldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPELDIALOG_H
#define UI_APPELDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AppelDialog
{
public:
    QLabel *name;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *call_button;
    QPushButton *uncall_button;
    QLabel *timerLabel;
    QLabel *tel;
    QLabel *email;
    QLabel *address;
    QLabel *label_2;

    void setupUi(QDialog *AppelDialog)
    {
        if (AppelDialog->objectName().isEmpty())
            AppelDialog->setObjectName("AppelDialog");
        AppelDialog->resize(481, 363);
        name = new QLabel(AppelDialog);
        name->setObjectName("name");
        name->setGeometry(QRect(60, 10, 61, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        name->setFont(font);
        comboBox = new QComboBox(AppelDialog);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(270, 70, 141, 25));
        label = new QLabel(AppelDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 40, 91, 17));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font1.setItalic(true);
        label->setFont(font1);
        call_button = new QPushButton(AppelDialog);
        call_button->setObjectName("call_button");
        call_button->setEnabled(true);
        call_button->setGeometry(QRect(30, 210, 41, 31));
        call_button->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Call.png"), QSize(), QIcon::Normal, QIcon::Off);
        call_button->setIcon(icon);
        call_button->setIconSize(QSize(30, 30));
        uncall_button = new QPushButton(AppelDialog);
        uncall_button->setObjectName("uncall_button");
        uncall_button->setEnabled(false);
        uncall_button->setGeometry(QRect(110, 210, 41, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Uncall.png"), QSize(), QIcon::Normal, QIcon::Off);
        uncall_button->setIcon(icon1);
        uncall_button->setIconSize(QSize(30, 30));
        timerLabel = new QLabel(AppelDialog);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setGeometry(QRect(60, 280, 291, 41));
        tel = new QLabel(AppelDialog);
        tel->setObjectName("tel");
        tel->setGeometry(QRect(30, 50, 131, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu")});
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(true);
        tel->setFont(font2);
        email = new QLabel(AppelDialog);
        email->setObjectName("email");
        email->setGeometry(QRect(30, 90, 131, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Yrsa")});
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(true);
        email->setFont(font3);
        address = new QLabel(AppelDialog);
        address->setObjectName("address");
        address->setGeometry(QRect(30, 120, 131, 41));
        address->setFont(font3);
        label_2 = new QLabel(AppelDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 200, 151, 81));

        retranslateUi(AppelDialog);

        QMetaObject::connectSlotsByName(AppelDialog);
    } // setupUi

    void retranslateUi(QDialog *AppelDialog)
    {
        AppelDialog->setWindowTitle(QCoreApplication::translate("AppelDialog", "Dialog", nullptr));
        name->setText(QCoreApplication::translate("AppelDialog", "name", nullptr));
        label->setText(QCoreApplication::translate("AppelDialog", "Select contact :", nullptr));
        call_button->setText(QString());
        uncall_button->setText(QString());
        timerLabel->setText(QString());
        tel->setText(QCoreApplication::translate("AppelDialog", "num", nullptr));
        email->setText(QCoreApplication::translate("AppelDialog", "email", nullptr));
        address->setText(QCoreApplication::translate("AppelDialog", "address", nullptr));
        label_2->setText(QCoreApplication::translate("AppelDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppelDialog: public Ui_AppelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPELDIALOG_H
