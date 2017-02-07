#include <iostream>

#include "Types.h"
#include "Utils.h"

int main() {

    Point2d pt;
    pt.x = pt.y = 0;
    std::cout << Utils::isOrigin(pt) << std::endl;

    pt.x = -5;
    std::cout << Utils::isOrigin(pt) << std::endl;

    return 0;
}