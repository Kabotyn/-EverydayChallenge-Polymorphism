#ifndef OIL_H
#define OIL_H

#include <string>

#include "../item.h"

using namespace std;

class Oil : public Item
{
private:
    string type; // olive, rapeseed, sunflower etc.
public:
    Oil(string p_name, float p_price, string p_type);
    ~Oil();

    void setType(string p_type);
    string getType();

    string getThirdParam();

};

#endif // OIL_H
