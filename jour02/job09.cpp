#include <iostream>
#include <limits>
#include <cstdlib>

int main(){
    int a, b, n;
    while (true)
    {   
        b = rand() % 10001;
        a = rand() % b;
        std::cout << "Veuillez fournir un nombre: ";
        if (!(std::cin >> n))
        {
            std::cout << "Erreur: n doit être un nombre entier." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        }
        std::cout << a << " " << b << std::endl;
        if ((n >=a ) && (n <= b)){
            std::cout << "GAGNE!" << std::endl;
        } else {
            std::cout << "PERDU!" << std::endl;
        }
    }
    return 0;
}