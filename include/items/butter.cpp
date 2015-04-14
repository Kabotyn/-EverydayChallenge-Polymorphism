#include <string>
#include "butter.h"

Butter::Butter(string p_name, float p_price, float fat) : Item(p_name, p_price) {
    setFat(fat);
}

Butter::~Butter()
{

}

void Butter::setFat(float fat) {
    fatPercentage = fat;
}

float Butter::getFat() {
    return fatPercentage;
}


string Butter::getThirdParam() {
    string result = "";
    result.append(to_string(fatPercentage));
    result.append(" % of fat.");
    return result;
}
