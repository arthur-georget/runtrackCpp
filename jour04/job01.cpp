#include <iostream>

int main(){
    int number = 2019;
    int* pointerNumber = &number;
    std::cout << "La valeur de \"number\" est : " << *pointerNumber << std::endl;
    return 0;
}