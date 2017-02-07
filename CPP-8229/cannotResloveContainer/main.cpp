#include <iostream>

namespace base {

    class Base {
    public:
        void f(int) { std::cout << "Base::f(int)" << std::endl; }
    };
}


class Child : public base::Base {
    // OK (injected class name?)
    using Base::f; // inspector error: cannot resolve container 'Base'
public:
    void f(double) { std::cout << "Child::f(double)" << std::endl; }
    Child() {
        f(1); // need "using Base::f" to call f(int) here
        f(0.1);
    }
};


int main() {
    Child c;
    return 0;
}