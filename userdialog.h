#ifndef USERDIALOG_H
#define USERDIALOG_H

#include <QDialog>
#include "appeldialog.h"

namespace Ui {
class UserDialog;
}

class UserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserDialog(QWidget *parent = 0);
    ~UserDialog();

private slots:
    void on_appel_clicked();

private:
    Ui::UserDialog *ui;
    AppelDialog *appeldialog;
};

#endif // USERDIALOG_H
