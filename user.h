#ifndef USER_H
#define USER_H

#include "QString"

class User
{
public:
    User();
    User(int id, QString name, QString password, bool authority);
    int id;
    QString name;
    QString password;
    bool authority;

};

#endif // USER_H
