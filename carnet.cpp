#include "dbconnexion.h"
#include "carnet.h"
#include <QString>
#include <QtSql>

carnet::carnet()
{
}
QString carnet::get_idcontact(){ return idcontact ;}
QString carnet::get_nom(){ return nom ;}
QString carnet::get_tel(){ return tel ;}
QString carnet::get_adresse(){ return adresse ;}
QString carnet::get_email(){ return email ;}

void carnet::set_idcontact(QString i) { idcontact=i; }
void carnet::set_nom(QString n) { nom=n; }
void carnet::set_tel(QString t) { tel=t; }
void carnet::set_adresse(QString a) { adresse=a; }
void carnet::set_email(QString e) { email=e; }

void carnet::Ajouter ()
{
    dbconnexion conn;
    conn.connOpen();
    QSqlQuery qry;

    qry.prepare ("INSERT INTO carnet(nom,tel,adresse,email) VALUES ('"+nom+"','"+tel+"','"+adresse+"','"+email+"')");
    if (qry.exec()) {
        qDebug() <<"Saved Successfully! ";
    }
    else {
        qDebug() <<"Error";
        qDebug() <<qry.lastError().text();
    }
    conn.connClose();
}
void carnet:: Supprimer ()
{
    dbconnexion conn;
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare ("DELETE FROM carnet WHERE idcontact='"+idcontact+"'");  ;
    if (qry.exec()) {
        qDebug() <<"Deleted Successfully!";
    }
    else
    {
        qDebug() <<"Error ";
        qDebug()<<qry.lastError().text();
    }
    conn.connClose();
}
void carnet::Modifier()
{
    dbconnexion conn;
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare ("UPDATE carnet SET nom='"+nom+"',tel='"+tel+"',adresse='"+adresse+"',email='"+email+"' WHERE idcontact = '"+idcontact+"' ");
    if (qry.exec()) {
        qDebug() << "Updated Successfully!" ;
    }

    else {
        qDebug() << "Contact couldn't be updated !";

    }
}
QSqlQueryModel * carnet::load ()
{
    dbconnexion conn;
    conn.connOpen();
    QSqlQueryModel *modal =new  QSqlQueryModel();
    QSqlQuery* qry =new  QSqlQuery (conn.get_mydb());
    qry->prepare("SELECT * FROM carnet");
    qry-> exec() ;
    modal-> setQuery(*qry);
    conn.connClose();
    return modal ;
}






