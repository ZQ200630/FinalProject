#include "order.h"

Order::Order()
{

}


Order::Order(int id, tm date, int count, int product_id)
{
    this->id = id;
    this->count = count;
    this->date = date;
    this->product_id = product_id;
}

