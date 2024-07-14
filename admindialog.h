#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H

#include <QDialog>
#include "contactdialog.h"

namespace Ui {
class AdminDialog;
}

class AdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDialog(QWidget *parent = 0);
    ~AdminDialog();

private slots:
    void on_contacts_clicked();

private:
    Ui::AdminDialog *ui;
    contactDialog *contactdialog;
};

#endif // ADMINDIALOG_H
