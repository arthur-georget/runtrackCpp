#include <iostream>

int main(){
    int a =  54;
    int b = 43;
    int c = 12;
    int* pointerA = &a;
    int* pointerB = &b;
    int* pointerC = &c;
    std::cout << "Valeur de a: " << a << std::endl;
    std::cout << "Valeur de b: " << b << std::endl;
    std::cout << "Valeur de c: " << c << std::endl;

    *pointerA = 1234;
    *pointerB = 54342;
    *pointerC = 9876;

    std::cout << "Valeur de a: " << a << std::endl;
    std::cout << "Valeur de b: " << b << std::endl;
    std::cout << "Valeur de c: " << c << std::endl;
    return 0;
}