#include <iostream>
#include "basket.h"

using namespace std;

Basket::Basket() {
    totalPrice = 0; // init price
}

Basket::~Basket()
{

}

void Basket::addItem(Item *item) {
    items.push_back(item);
    totalPrice += item->getPrice();
}

float Basket::getTotalPrice() {
    return totalPrice;
}

int Basket::size() {
    return (int)items.size();
}

void Basket::printItems() {
    cout << "In basket are these items:" << endl;
    for(int i = 0; i < (int)items.size(); i++) {
        cout << (i+1) << ". " << items[i]->getName() << "\t" << items[i]->getPrice() << " € \t" << items[i]->getThirdParam() << endl;
    }
}
