#include "daofactory.h"

Dao* DaoFactory::dao = nullptr;

DaoFactory::DaoFactory()
{

}


Dao* DaoFactory::getDao()
{
    if(DaoFactory::dao == nullptr)
    {
        DaoFactory::dao = new Dao();
    }
    return DaoFactory::dao;
}
