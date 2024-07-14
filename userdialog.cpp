#include "userdialog.h"
#include "ui_userdialog.h"
#include "appeldialog.h"

UserDialog::UserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDialog)
{
    ui->setupUi(this);
    QPixmap pix("./user.png");
    int wp = ui->label_puser->width();
    int hp = ui->label_puser->height();
    ui->label_puser->setPixmap(pix.scaled(wp,hp,Qt::KeepAspectRatio));
}

UserDialog::~UserDialog()
{
    delete ui;
}

void UserDialog::on_appel_clicked()
{
    appeldialog = new AppelDialog (this);
    appeldialog -> show();
}
