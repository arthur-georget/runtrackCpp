#include <iostream>
#include <limits>
#include <cmath>

int main(){
    float n;
    while (true)
    {   
        std::cout << "Veuillez fournir un nombre réel positif: ";
        if (!(std::cin >> n))
        {
            std::cout << "Erreur: n doit être un nombre réel." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        } else if (n < 0){
            std::cout << "Erreur: n doit être un nombre positif." << std::endl;
            continue;
        } else if (n == 0){
            break;
        } else {}
        std::cout << "la racine carrée de " << n << " est: " << std::sqrt(n) << std::endl; 
    }
    return 0;
}