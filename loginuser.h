#ifndef LOGINUSER_H
#define LOGINUSER_H

#include <QString>

class LoginUser
{
public:
    LoginUser();
    LoginUser(int id, QString name, QString password);
    int id;
    QString name;
    QString password;
};

#endif // LOGINUSER_H
