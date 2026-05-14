#include <iostream>

int main(){
    int entier = 17;
    float flottant = 3.14;
    long reel = 123.345;
    char caractere[] = "La Plateforme";

    std::cout << "valeur de entier: " << entier << std::endl;
    std::cout << "adresse de entier: " << &entier << std::endl;

    std::cout << "valeur de flottant: " << flottant << std::endl;
    std::cout << "adresse de flottant: " << &flottant << std::endl;

    std::cout << "valeur de reel: " << reel << std::endl;
    std::cout << "adresse de reel: " << &reel << std::endl;

    std::cout << "valeur de caractere: " << caractere << std::endl;
    std::cout << "adresse de caractere: " << &caractere << std::endl;
}