#ifndef DAOFACTORY_H
#define DAOFACTORY_H

#include "dao.h"

class DaoFactory
{
public:
    DaoFactory();
    static Dao* getDao();
    static Dao* dao;

};

#endif // DAOFACTORY_H
