#ifndef PRODUCT_H
#define PRODUCT_H

#include "QString"

class Product
{
public:
    Product();
    Product(int id, int type, QString name, int selling_price, int purchase_price, int stock, float discount);
    int id;
    int type;
    QString name;
    int selling_price;
    int purchase_price;
    int stock;
    float discount;

};

#endif // PRODUCT_H
