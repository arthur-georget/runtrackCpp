#include <iostream>

int main(){
    float price;
    float vat;
    float quantity;

    std::cout << "Bienvenue dans le compteur de carottes." << std::endl;

    std::cout << "Veuillez renseigner le prix au kilo: ";
    std::cin >> price;

    std::cout << "Veuillez renseigner la quantité: ";
    std::cin >> quantity;

    std::cout << "Veuillez renseigner le taux de TVA: ";
    std::cin >> vat;

    std::cout << "Vous me devez " << ((price * quantity) + (price * quantity * vat) / 100) << "€" << std::endl;
    return 0;

}