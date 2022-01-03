#include "user.h"

User::User()
{

}

User::User(int id, QString name, QString password, bool authority)
{
    this->id = id;
    this->name = name;
    this->password = password;
    this->authority = authority;
}
