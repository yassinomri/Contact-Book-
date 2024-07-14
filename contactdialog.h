#ifndef CONTACTDIALOG_H
#define CONTACTDIALOG_H

#include <QDialog>

namespace Ui {
class contactDialog;
}

class contactDialog : public QDialog
{
    Q_OBJECT

public:
    explicit contactDialog(QWidget *parent = nullptr);
    ~contactDialog();

private slots:
    void on_Save_clicked();
    void on_Update_clicked();
    void on_Delete_clicked();
    void on_Load_clicked();
    void on_tableView_activated(const QModelIndex &index);

    void on_Init_clicked();

private:
    Ui::contactDialog *ui;
};

#endif // CONTACTDIALOG_H
