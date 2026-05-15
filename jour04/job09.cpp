#include <iostream>
#include <vector>

int main(){
    int arrSize;
    std::cout << "Veuillez fournir le nombre d'entiers que vous voulez entrer: ";
    std::cin >> arrSize;
    std::vector<int> arr(arrSize);
    for (int i = 0; i < arrSize; i++){
        std::cout << "Veuillez fournir l'entier numéro " << i+1 << " sur " << arrSize << " : ";
        std::cin >> arr[i];
    }
    std::cout << "Voici les entiers fournis: "; 
    for (int i : arr){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}