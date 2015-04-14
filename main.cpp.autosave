#include <iostream>

#include "include/basket.h"
#include "include/item.h"
#include "include/items/butter.h"
#include "include/items/oil.h"
#include "include/items/tv.h"

using namespace std;

int main()
{

    Basket myBasket;

    Item *butterex = new Butter("Butterex Extra", 1.09, 82.0);
    Item *butterExtra = new Butter("Extra Butter", 2.19, 84.0);

    Item *oliveOil = new Oil("Super Olive Oil", 5.99, "Olive");
    Item *extraOil = new Oil("Hiper Extra Olive Oil", 8.99, "Olive");
    Item *oil = new Oil("Just Oil", 0.99, "Rapeseed");

    Item *tv = new Tv("LCD LED ALL in ONE TV", 2999.99, 55.0);
    Item *smallTv = new Tv("Normal small TV", 199.00, 21.0);


    myBasket.addItem(butterex);
    myBasket.addItem(butterExtra);

    myBasket.addItem(oliveOil);
    myBasket.addItem(extraOil);
    myBasket.addItem(oil);

    myBasket.addItem(tv);
    myBasket.addItem(smallTv);

    myBasket.printItems();
    cout << "Total price:\t" << myBasket.getTotalPrice() << endl;

    return 0;
}

