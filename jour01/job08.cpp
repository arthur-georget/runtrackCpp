#include <iostream>

int main(){
    int year;
    std::cout << "De quel année voulez-vous savoir si elle est bissextile ou non? ";
    std::cin >> year;
    if(((year%100 == 0) && (year%400 != 0)) || !(year%4 == 0) ){
        std::cout << year << " n'est pas une année bissextile." << std::endl;
    } else{
        std::cout << year << " est une année bissextile." << std::endl;
    };
    return 0;
}