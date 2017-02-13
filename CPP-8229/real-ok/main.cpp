
#include <iostream>

#include "utils/types.h"
#include <cmath>

real f(real x) {
    real PI = 3.14;
    return std::sin(std::abs(x) + PI / 2);
}


int main() {

    real r = 1. / 3;
    std::cout << f(r) << std::endl;
    return 0;
}
