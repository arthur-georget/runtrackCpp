#include <iostream>
#include <limits>

int main(){
    
    int size = 10;
    int T[10];
    int max;
    int maxIndex;
    for (int i = 0; i < size; i++){
        while(true){
            std::cout << "Veuillez fournir l'entier numéro " << i << " : ";
            if (!(std::cin >> T[i]))
            {
                std::cout << "Erreur: n doit être un nombre entier." << std::endl;
                std::cin.clear();                                                   // Reset the error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
                continue;
            }
            break;
        }
        if(i==0 || T[i] > max){
            max = T[i];
            maxIndex = i;
        }
    }
    std::cout << "L'indice du plus grand élément est: " << maxIndex << std::endl;
    return 0;
}