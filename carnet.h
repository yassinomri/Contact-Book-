#ifndef CARNET_H
#define CARNET_H
#include <QString>
#include <QSqlQueryModel>

class carnet
{
public:
    carnet();
    QString get_idcontact() ;
    QString get_nom();
    QString get_tel() ;
    QString get_adresse() ;
    QString get_email() ;

    void set_idcontact(QString);
    void set_nom(QString);
    void set_tel(QString);
    void set_adresse(QString);
    void set_email(QString);

    void Ajouter ();
    void Supprimer();
    void Modifier();
    QSqlQueryModel *load () ;

private :

    QString idcontact;
    QString nom;
    QString tel ;
    QString adresse;
    QString email;

};

#endif // CARNET_H
