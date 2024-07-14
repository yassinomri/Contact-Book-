#include "rechdialog.h"
#include "ui_rechdialog.h"

rechDialog::rechDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::rechDialog)
{
    ui->setupUi(this);
}

rechDialog::~rechDialog()
{
    delete ui;
}
