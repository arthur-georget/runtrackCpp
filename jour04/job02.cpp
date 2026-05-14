#include <iostream>


int main(){
    char char1 = 'R';
    char char2 = 'B';
    char* pointerChar1 = &char1;
    char* pointerChar2 = &char2;
    char temp = *pointerChar1;

    std::cout << "La valeur de \"char1\" est : " << char1 << std::endl;
    std::cout << "La valeur de \"char2\" est : " << char2 << std::endl;
    *pointerChar1 = *pointerChar2;
    *pointerChar2 = temp;
    std::cout << "La valeur de \"char1\" est : " << char1 << std::endl;
    std::cout << "La valeur de \"char2\" est : " << char2 << std::endl;
    return 0;
}