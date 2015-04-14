#ifndef BASKET_H
#define BASKET_H

#include <vector>

#include "item.h"

using namespace std;

class Basket
{
private:
    vector<Item *> items;
    float totalPrice; // total basket price

public:
    Basket();
    ~Basket();

    void addItem(Item *item); // add Item to items (vector)

    void printItems();

    float getTotalPrice(); // return total basket prcie
    int size(); // return how many items are in basket

};

#endif // BASKET_H
