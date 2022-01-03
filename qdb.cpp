#include "qdb.h"

QDB::QDB()
{
    dbstate = false;
}

QDB::QDB(const QString dbname)
{
    Connect(dbname);
}

QDB::~QDB()
{
    Disconnect();
}

bool QDB::Connect(const QString dbname)
{

    if(!this->db.isOpen())
    {
        this->db = QSqlDatabase::addDatabase("QSQLITE");
        this->db.setDatabaseName(dbname);

        if(!this->db.open())
        {
            return false;
        }
        else
        {
            dbstate = true;
            return true;
        }
    }
    else
    {
        return false;
    }
}

bool QDB::Disconnect()
{
    if(this->db.isOpen())
    {
        this->db.close();
        return true;
    }
    else
    {
        return false;
    }
}

QSqlQuery QDB::Query(QString q)
{
    QSqlQuery query(q);
    return query;
}
