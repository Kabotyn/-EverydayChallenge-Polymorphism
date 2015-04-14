#ifndef BUTTER_H
#define BUTTER_H

#include <string>

#include "../item.h"

using namespace std;

class Butter : public Item
{
private:
    float fatPercentage;

public:
    Butter(string p_name = "Butterex", float p_price = 1.2, float fat = 82);
    ~Butter();

    float getFat();
    void setFat(float fat);

    string getThirdParam(); // overload virtual function from parent

};

#endif // BUTTER_H
