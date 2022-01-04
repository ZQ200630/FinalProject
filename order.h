#ifndef ORDER_H
#define ORDER_H

#include "time.h"

class Order
{
public:
    Order();
    Order(int id, tm date, int count, int product_id);
    int id;
    tm date;
    int count;
    int product_id;
};

#endif // ORDER_H
