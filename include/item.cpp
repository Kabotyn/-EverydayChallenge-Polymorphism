#include "item.h"

Item::Item(string p_name, float p_price) {
    setName(p_name);
    setPrice(p_price);
}

Item::~Item()
{

}

void Item::setName(string p_name) {
    itemName = p_name;
}

string Item::getName() {
    return itemName;
}

void Item::setPrice(float p_price) {
    itemPrice = p_price;
}

float Item::getPrice() {
    return itemPrice;
}

string Item::getThirdParam() {
    return "";
}
