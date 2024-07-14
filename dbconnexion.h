#ifndef DBCONNEXION_H
#define DBCONNEXION_H
#include <QtSql>
#include <QString>

class dbconnexion
{
public:
    dbconnexion();

    void connClose();
    bool connOpen();
    QSqlDatabase get_mydb();
    void  set_mydb( QSqlDatabase) ;
    ~dbconnexion();
private:
    QSqlDatabase mydb;
};

#endif // DBCONNEXION_H
