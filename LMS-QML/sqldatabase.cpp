#include "sqldatabase.h"
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlRecord>

SqlDataBase::SqlDataBase(const QString &path)
{
    mdb=QSqlDatabase::addDatabase("QSQLITE");
    mdb.setDatabaseName(path);
    if(!mdb.open())
    {
        qDebug()<<"Error";
    }
    else
    {
        qDebug()<<"connection ok";
    }
}

