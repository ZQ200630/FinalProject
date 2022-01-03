#include "order.h"

Order::Order()
{

}


Order::Order(int id, tm time, int count, int product_id) {
    this->id = id;
    this->count = count;
    this->product_id = product_id;
}

