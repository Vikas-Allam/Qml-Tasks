#ifndef SQLDATABASE_H
#define SQLDATABASE_H

#include <QObject>
#include<QSettings>
#include<QSqlDatabase>

class SqlDataBase
{
public:
    SqlDataBase(QString &);
private:
    QSqlDatabase mdb;
};

#endif // SQLDATABASE_H
