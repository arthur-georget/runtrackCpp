#include <iostream>
#include <limits>
#include <string>

int main(){

    std::string fruits[] = {"Banane","Kiwi","Pomme","Orange","Cerise"};
    for(std::string fruit: fruits){
        std::cout << fruit << std::endl;
    }
    int favoritesSize;
    while (true){
        favoritesSize = 0;
        std::cout << "Combien avez-vous de fruits préférés? ";
            if (!(std::cin >> favoritesSize) || favoritesSize <= 0)
            {
                std::cout << "Erreur: vous devez fournir un nombre entier positif." << std::endl;
                std::cin.clear();                                                   // Reset the error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
                continue;
            }
            break;
    }
    std::string* favorites = new std::string[favoritesSize];
    for (int i = 0; i < favoritesSize; i++){
        std::cout << "Veuillez renseigner votre fruit préféré numéro " << i+1 << " : ";
        std::cin >> *(favorites+i);
    };
    std::cout << "Voici la liste de vos fruits favoris:" << std::endl;
    for (int i = 0; i < favoritesSize; i++){
        std::cout << *(favorites+i) << std::endl;
    };
    delete[] favorites;
    return 0;
}