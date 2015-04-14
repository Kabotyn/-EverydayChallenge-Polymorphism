#include "oil.h"

Oil::Oil(string p_name, float p_price, string p_type) : Item(p_name, p_price) {
    setType(p_type);
}

Oil::~Oil()
{

}

void Oil::setType(string p_type) {
    type = p_type;
}

string Oil::getType() {
    return type;
}


string Oil::getThirdParam() {
    string result = "Type: ";
    result.append(type);
    return result;
}
