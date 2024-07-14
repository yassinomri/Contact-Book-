#ifndef RECHDIALOG_H
#define RECHDIALOG_H

#include <QDialog>

namespace Ui {
class rechDialog;
}

class rechDialog : public QDialog
{
    Q_OBJECT

public:
    explicit rechDialog(QWidget *parent = nullptr);
    ~rechDialog();

private:
    Ui::rechDialog *ui;
};

#endif // RECHDIALOG_H
