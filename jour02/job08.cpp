#include <iostream>
#include <limits>

int main(){
    int a, b;
    while (true)
    {
        std::cout << "Veuillez fournir un nombre a: ";
        if (!(std::cin >> a))
        {
            std::cout << "Erreur: a doit être un nombre entier." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        }
        std::cout << "Veuillez fournir un nombre b: ";
        if (!(std::cin >> b))
        {
            std::cout << "Erreur: b doit être un nombre entier." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        int i = a;
        while (i <= b){
            std::cout << i << std::endl;
            i++;
        }
    }
    return 0;
}