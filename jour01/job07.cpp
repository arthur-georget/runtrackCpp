#include <iostream>

int main(){
    int n;
    std::cout << "De quel entier voulez-vous savoir si il est pair ou impair? ";
    std::cin >> n;
    if(n%2 == 0){
        std::cout << n << " est pair." << std::endl;
    } else{
        std::cout << n << " est impair." << std::endl;
    };

    return 0;
}