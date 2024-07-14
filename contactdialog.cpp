#include "contactdialog.h"
#include "ui_contactdialog.h"
#include <QMessageBox>
#include "dbconnexion.h"
#include "carnet.h"

contactDialog::contactDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::contactDialog)
{
    ui->setupUi(this);
    dbconnexion conn;
    if(!conn.connOpen())
        ui->contact_status->setText("Failed to OPEN the database");
    else
        ui->contact_status->setText("Connected");
}

contactDialog::~contactDialog()
{
    delete ui;
}


void contactDialog::on_Save_clicked()
{
    carnet conn;
    conn.set_nom(ui-> nom_text->text());
    conn.set_tel(ui-> tel_text->text());
    conn.set_adresse(ui-> adresse_text->text());
    conn.set_email(ui-> email_text->text());

    conn.Ajouter();
}

void contactDialog::on_Update_clicked()
{
    carnet conn;
    conn.set_idcontact(ui-> id_text->text());
    conn.set_nom(ui-> nom_text->text());
    conn.set_tel(ui-> tel_text->text());
    conn.set_adresse(ui-> adresse_text->text());
    conn.set_email(ui-> email_text->text());

    conn.Modifier ();
}

void contactDialog::on_Delete_clicked()
{
    carnet conn;
    conn.set_idcontact(ui-> id_text->text());
    conn.set_nom(ui-> nom_text->text());
    conn.set_tel(ui-> tel_text->text());
    conn.set_adresse(ui-> adresse_text->text());
    conn.set_email(ui-> email_text->text());

    conn.Supprimer();
}

void contactDialog::on_Load_clicked()
{
    carnet c;
    //Remplissage TableView
    QSqlQueryModel *modal1 = new QSqlQueryModel();
    modal1=c.load();
    ui->tableView->setModel(modal1);
    qDebug() << (modal1->rowCount());
}

void contactDialog::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();

    if (index.isValid()) {
        // Activer les boutons
        ui->Init->setEnabled(true);
        ui->Delete->setEnabled(true);
        ui->Update->setEnabled(true);
    } else {
        // Désactiver les boutons si aucun enregistrement n'est sélectionné
        ui->Init->setEnabled(false);
        ui->Delete->setEnabled(false);
        ui->Update->setEnabled(false);
    }

    dbconnexion conn;
    if (!conn.connOpen())
        ui ->contact_status->setText("Failed to open the database !");
    else
        ui ->contact_status->setText("Connected to database !");
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM carnet WHERE idcontact='"+val+"' OR nom='"+val+"' OR tel='"+val+"' OR adresse='"+val+"' OR email='"+val+"'");
    if (qry.exec())
    {
        while(qry.next())
        {
            ui->id_text->setText(qry.value(0).toString());
            ui->nom_text->setText(qry.value(1).toString());
            ui->tel_text->setText(qry.value(2).toString());
            ui->adresse_text->setText(qry.value(3).toString());
            ui->email_text->setText(qry.value(4).toString());
        }
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}

void contactDialog::on_Init_clicked()
{
    ui-> id_text->setText("");
    ui-> nom_text->setText("");
    ui-> tel_text->setText("");
    ui-> adresse_text->setText("");
    ui-> email_text->setText("");

    ui->Save->setEnabled(true);
}
