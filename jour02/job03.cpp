#include <iostream>

void sumWhile(){
    int i, n, sum;
    sum = 0;
    i = 0;
    while(i < 4){
        std::cout << "Donnez un entier: ";
        std::cin >> n;
        sum += n;
        i++;
    }
    std::cout << "Somme: " << sum << std::endl;
}

void sumDoWhile(){
    int i, n, sum;
    sum = 0;
    i = 0;
    do {
        std::cout << "Donnez un entier: ";
        std::cin >> n;
        sum += n;
        i++;
    } while(i < 4);
    std::cout << "Somme: " << sum << std::endl;
}

int main(){
    sumWhile();
    sumDoWhile();
    return 0;
}