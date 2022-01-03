#include "dao.h"

#include "QDebug"

Dao::Dao()
{
    database.Connect("C:/Users/Jason/Desktop/QT/FinalProject/db/FinalProject.db");
}

void Dao::test()
{
    QSqlQuery query = database.Query("select * from users");
    query.exec();

    while(query.next())
    {
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        //        int age = query.value(2).toInt();
        qDebug() << QString("id:%1    name:%2").arg(id).arg(name);
    }
}

bool Dao::verify(LoginUser user)
{
    QString sql = QString("select * from test where name = '%1'").arg(user.name);
    QSqlQuery query = database.Query(sql);
    query.exec();
    if(query.next())
    {
        QString password = query.value(2).toString();
        if(password == user.password)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
