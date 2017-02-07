#include <iostream>

// "Can't resolve variable" inspection error when typedef-ing anonymous class/struct

typedef struct {
    int x;
    bool isZero() { return (x == 0); } // can't resolve 'x'
} struct_t;

typedef class {
public:
    void test() { std::cout << this << std::endl; }  // can't resolve 'this'
} class_t;

int main() {

    struct_t s;
    s.x = 0;
    std::cout << s.isZero() << std::endl;

    s.x = 1;
    std::cout << s.isZero() << std::endl;

    class_t t;
    t.test();

    return 0;
}
