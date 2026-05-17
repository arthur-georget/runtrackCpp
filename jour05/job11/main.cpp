#include "Operation.hpp"
#include <iostream>

int main(){
    Operation *a = new Operation(5);
    Operation *b = new Operation(6);
    Operation *c = new Operation(2);

    std::cout << a->getValue() << "+" << b->getValue() << " = " << *a + *b << std::endl;
    std::cout << b->getValue() << "-" << a->getValue() << " = " << *b - *a << std::endl;
    std::cout << a->getValue() << "*" << c->getValue() << " = " << *a * *c << std::endl;
    std::cout << b->getValue() << "/" << c->getValue() << " = " << *b / *c << std::endl;

    delete a,b,c;
    return 0;
}