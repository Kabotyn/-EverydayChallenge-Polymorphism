#ifndef ITEMS_H
#define ITEMS_H

#include <string>

using namespace std;

class Item
{

private:
    string itemName;
    float itemPrice;

public:
    Item(string p_name = "", float p_price = 0.0);
    ~Item();

    string getName();   // return item name
    void setName(string p_name); // set item name

    float getPrice(); // retun price of item
    void setPrice(float p_price); // set price

    virtual string getThirdParam() = 0; // return third param of child



};

#endif // ITEMS_H
