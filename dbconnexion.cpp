#include "dbconnexion.h"

dbconnexion::dbconnexion()
{
}
void dbconnexion::connClose()
{
    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}
bool dbconnexion::connOpen()
{
    mydb=QSqlDatabase::addDatabase( "QSQLITE" );
    mydb.setDatabaseName("./MP_database.db");

    if(!mydb.open()){
        qDebug()<<("Failed to open the database!");
        return false; }
    else {
        qDebug()<<("Connected");
        return true ;
    }
}
QSqlDatabase  dbconnexion:: get_mydb()
{
    return mydb ;
}
void dbconnexion:: set_mydb (QSqlDatabase ch )
{
    mydb=ch ;
}
dbconnexion::~dbconnexion()
{
}


