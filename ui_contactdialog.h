/********************************************************************************
** Form generated from reading UI file 'contactdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTDIALOG_H
#define UI_CONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_contactDialog
{
public:
    QLabel *contact_status;
    QTableView *tableView;
    QPushButton *Load;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *id;
    QLabel *nom;
    QLabel *tel;
    QLabel *adresse;
    QLabel *email;
    QVBoxLayout *verticalLayout;
    QLineEdit *id_text;
    QLineEdit *nom_text;
    QLineEdit *tel_text;
    QLineEdit *adresse_text;
    QLineEdit *email_text;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Save;
    QPushButton *Update;
    QPushButton *Delete;
    QPushButton *Init;

    void setupUi(QDialog *contactDialog)
    {
        if (contactDialog->objectName().isEmpty())
            contactDialog->setObjectName("contactDialog");
        contactDialog->resize(753, 323);
        contact_status = new QLabel(contactDialog);
        contact_status->setObjectName("contact_status");
        contact_status->setGeometry(QRect(10, 300, 191, 17));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font.setPointSize(10);
        font.setItalic(true);
        contact_status->setFont(font);
        tableView = new QTableView(contactDialog);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(400, 30, 341, 192));
        Load = new QPushButton(contactDialog);
        Load->setObjectName("Load");
        Load->setGeometry(QRect(520, 240, 106, 25));
        layoutWidget = new QWidget(contactDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 30, 311, 191));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        id = new QLabel(layoutWidget);
        id->setObjectName("id");

        verticalLayout_2->addWidget(id);

        nom = new QLabel(layoutWidget);
        nom->setObjectName("nom");

        verticalLayout_2->addWidget(nom);

        tel = new QLabel(layoutWidget);
        tel->setObjectName("tel");

        verticalLayout_2->addWidget(tel);

        adresse = new QLabel(layoutWidget);
        adresse->setObjectName("adresse");

        verticalLayout_2->addWidget(adresse);

        email = new QLabel(layoutWidget);
        email->setObjectName("email");

        verticalLayout_2->addWidget(email);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        id_text = new QLineEdit(layoutWidget);
        id_text->setObjectName("id_text");
        id_text->setEnabled(false);

        verticalLayout->addWidget(id_text);

        nom_text = new QLineEdit(layoutWidget);
        nom_text->setObjectName("nom_text");
        nom_text->setEnabled(true);

        verticalLayout->addWidget(nom_text);

        tel_text = new QLineEdit(layoutWidget);
        tel_text->setObjectName("tel_text");
        tel_text->setEnabled(true);

        verticalLayout->addWidget(tel_text);

        adresse_text = new QLineEdit(layoutWidget);
        adresse_text->setObjectName("adresse_text");
        adresse_text->setEnabled(true);

        verticalLayout->addWidget(adresse_text);

        email_text = new QLineEdit(layoutWidget);
        email_text->setObjectName("email_text");

        verticalLayout->addWidget(email_text);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(contactDialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 260, 311, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Save = new QPushButton(layoutWidget1);
        Save->setObjectName("Save");
        Save->setEnabled(false);

        horizontalLayout_2->addWidget(Save);

        Update = new QPushButton(layoutWidget1);
        Update->setObjectName("Update");
        Update->setEnabled(false);

        horizontalLayout_2->addWidget(Update);

        Delete = new QPushButton(layoutWidget1);
        Delete->setObjectName("Delete");
        Delete->setEnabled(false);

        horizontalLayout_2->addWidget(Delete);

        Init = new QPushButton(contactDialog);
        Init->setObjectName("Init");
        Init->setEnabled(false);
        Init->setGeometry(QRect(30, 230, 311, 25));

        retranslateUi(contactDialog);

        QMetaObject::connectSlotsByName(contactDialog);
    } // setupUi

    void retranslateUi(QDialog *contactDialog)
    {
        contactDialog->setWindowTitle(QCoreApplication::translate("contactDialog", "Dialog", nullptr));
        contact_status->setText(QCoreApplication::translate("contactDialog", "contact status", nullptr));
        Load->setText(QCoreApplication::translate("contactDialog", "Load", nullptr));
        id->setText(QCoreApplication::translate("contactDialog", "ID", nullptr));
        nom->setText(QCoreApplication::translate("contactDialog", "Nom", nullptr));
        tel->setText(QCoreApplication::translate("contactDialog", "T\303\251l", nullptr));
        adresse->setText(QCoreApplication::translate("contactDialog", "Adresse", nullptr));
        email->setText(QCoreApplication::translate("contactDialog", "E-mail", nullptr));
        email_text->setText(QString());
        Save->setText(QCoreApplication::translate("contactDialog", "Save", nullptr));
        Update->setText(QCoreApplication::translate("contactDialog", "Update", nullptr));
        Delete->setText(QCoreApplication::translate("contactDialog", "Delete", nullptr));
        Init->setText(QCoreApplication::translate("contactDialog", "Init", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contactDialog: public Ui_contactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTDIALOG_H
