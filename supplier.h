#ifndef SUPPLIER_H
#define SUPPLIER_H

#include "QString"

class Supplier
{
public:
    Supplier();
    Supplier(int id, QString name);
    int id;
    QString name;
};

#endif // SUPPLIER_H
