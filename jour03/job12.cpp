#include <iostream>
#include <limits>
#include <cstdlib>
#include <time.h>

int main(){
    int life, goal, n;
    srand(time(0));
    goal = rand() % 100;
    life = 5;
    std::cout << "Vous devez deviner un chiffre en 0 et 100." << std::endl; 
    while (life > 0)
    {   
        std::cout << "Il vous reste " << life << " vies." << std::endl;
        std::cout << "Veuillez fournir un nombre: ";
        if (!(std::cin >> n))
        {
            std::cout << "Erreur: n doit être un nombre entier." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        }
        if (n > goal){
            std::cout << "Trop grand!" << std::endl;
        } else if (n < goal){
            std::cout << "Trop petit!" << std::endl;
        } else {
            std::cout << "Bravo! vous avez gagné!!" << std::endl;
            return 0;
        }
        life--;
    }
    std::cout << "Dommage, vous avez perdu!" << std::endl;
    std::cout << "La réponse était " << goal << "." << std::endl;
    return 0;
}