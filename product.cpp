#include "product.h"

Product::Product()
{

}

Product::Product(int id, int type, QString name, int selling_price, int purchase_price, int stock, float discount)
{
    this->id = id;
    this->type = type;
    this->name =  name;
    this->selling_price = selling_price;
    this->purchase_price = purchase_price;
    this->stock = stock;
    this->discount = discount;
}
