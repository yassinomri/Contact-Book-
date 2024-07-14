#include "admindialog.h"
#include "ui_admindialog.h"


AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    QPixmap pix("./admin.jpg");
    int wp = ui->label_padmin->width();
    int hp = ui->label_padmin->height();
    ui->label_padmin->setPixmap(pix.scaled(wp,hp,Qt::KeepAspectRatio));
}

AdminDialog::~AdminDialog()
{
    delete ui;
}
void AdminDialog::on_contacts_clicked()
{
    contactdialog = new contactDialog (this);
    contactdialog ->show();
}

