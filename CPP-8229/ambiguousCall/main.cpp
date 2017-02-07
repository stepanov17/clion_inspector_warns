#include <iostream>

class Base {
public:
    void f(int) { std::cout << "Base::f(int)" << std::endl; }
};

class Child : public Base {
    using Base::f;
public:
    void f(double) { std::cout << "Child::f(double)" << std::endl; }
    Child() {
        f(1); // inspection error: "ambiguous call"
        f(0.1);
    }
};

int main() {
    Child c;
    return 0;
}
