
#ifndef UNKNOWNSTRUCTURE_UTILS_H
#define UNKNOWNSTRUCTURE_UTILS_H

struct Point2d;

class Utils {
public:
    // can DECLARE
    static bool isOrigin(Point2d pt); // inspector error:
    static bool isOrigin(Point2d pt); // inspector error:
                                      // instantiating an unknown structure without a reference
    // but cannot DEFINE!
    //static bool test(Point2d pt) {} // compiler error
};


#endif //UNKNOWNSTRUCTURE_UTILS_H
