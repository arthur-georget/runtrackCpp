#include <iostream>

int main(){
    int n;
    std::cout << "De quel entier voulez-vous voir la table de multiplication? ";
    std::cin >> n;
    std::cout << "Voici la table de multiplication de " << n << std::endl;
    for (int i = 1; i < 10; i++){
        std::cout << i << " * " << n << " = " << i * n << std::endl;
    };
    return 0;
}