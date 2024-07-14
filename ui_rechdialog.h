/********************************************************************************
** Form generated from reading UI file 'rechdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHDIALOG_H
#define UI_RECHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_rechDialog
{
public:

    void setupUi(QDialog *rechDialog)
    {
        if (rechDialog->objectName().isEmpty())
            rechDialog->setObjectName("rechDialog");
        rechDialog->resize(624, 399);

        retranslateUi(rechDialog);

        QMetaObject::connectSlotsByName(rechDialog);
    } // setupUi

    void retranslateUi(QDialog *rechDialog)
    {
        rechDialog->setWindowTitle(QCoreApplication::translate("rechDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rechDialog: public Ui_rechDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHDIALOG_H
