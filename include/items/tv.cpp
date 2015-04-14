#include "tv.h"

Tv::Tv(string p_name, float p_price, float p_size) : Item(p_name, p_price) {
    setSize(p_size);
}

Tv::~Tv()
{

}

void Tv::setSize(float p_size) {
    size = p_size;
}

float Tv::getSize() {
    return size;
}

string Tv::getThirdParam() {
    string result = "Diaginal: ";
    result.append(to_string(size));
    result.append(" inches.");
    return result;
}

