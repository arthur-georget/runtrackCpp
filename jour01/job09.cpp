#include <iostream>

int main(){
    int integers[3];
    for (int i = 0; i < 3; i++){
        std::cout << "Veuillez renseigner l'entier numéro " << i << ": ";
        std::cin >> integers[i];
    }
    
    int max = integers[0];

    for (int i = 0; i < 3; i++){
        if(integers[i] > max){
            max = integers[i];
        }
    }

    std::cout << "Le numéro le plus grand est " << max << std::endl;
    return 0;

}