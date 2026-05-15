#include <iostream>
#include <string>
#include <vector>
#include <limits>

struct Travel {
    std::string destination;
    int flyDuration;
};

int main(){
    std::vector<Travel*> travels;
    int flyCount;
    while (true){
        std::cout << "Combien de vols voulez-vous rentrer? ";
        if(!(std::cin >> flyCount) || flyCount < 0){
            std::cout << "Erreur: le nombre de vols doit être un nombre entier positif." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        }
        break;
    }

    for(int i = 0; i < flyCount; i++){
        Travel* newTravel = new Travel;
        std::cout << "Veuillez saisir une destination: ";
        std::cin >> newTravel->destination;
        while(true){
            std::cout << "Veuillez saisir un temps de vol en minutes: ";
            if (!(std::cin >> newTravel->flyDuration) || newTravel->flyDuration < 0)
            {
                std::cout << "Erreur: le temps de vol doit être un nombre entier positif." << std::endl;
                std::cin.clear();                                                   // Reset the error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
                continue;
            }
            break;
        }
        travels.push_back(newTravel);
    }

    for(Travel* travel : travels){
        std::cout << "Destination: " << travel->destination << std::endl;
        std::cout << "Temps de vol: " << travel->flyDuration << std::endl;
        travel->flyDuration += 3;
        std::cout << "Temps de vol modifié: " << travel->flyDuration << std::endl;
    }

    for(Travel* travel: travels){
        delete travel;
    }

    travels.clear();
    return 0;
}