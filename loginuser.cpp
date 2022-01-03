#include "loginuser.h"

LoginUser::LoginUser()
{

}

LoginUser::LoginUser(int id, QString name, QString password)
{
    this->id = id;
    this->name = name;
    this->password = password;
}
