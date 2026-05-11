#include <iostream>

int main(){
    float mean = 0;
    float userInput;
    for (int i = 1; i < 6; i++){
        std::cout << "Veuillez renseigner l'entier numéro " << i << ": ";
        std::cin >> userInput;
        mean += userInput;
    }

    std::cout << "La moyenne est " << mean/5.0 << std::endl;
    return 0;

}