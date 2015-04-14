#ifndef TV_H
#define TV_H

#include <string>

#include "../item.h"

class Tv : public Item {
private:
    float size; // inches

public:
    Tv(string p_name, float p_price, float p_size);
    ~Tv();

    void setSize(float p_size);
    float getSize();

    string getThirdParam(); // overload virtual function from parent
};

#endif // TV_H
