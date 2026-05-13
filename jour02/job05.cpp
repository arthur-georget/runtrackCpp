#include <iostream>

int main(){
    while (true){
        float grade;
        do{
            std::cout << "Veuillez saisir une note entre 0 et 20: ";
            std::cin >> grade;
        }
        while ( !(grade >= 0) || !(grade <= 20));
        if(grade >= 10){
            std::cout << "Validé!" << std::endl;
        } else {
            std::cout << "Non validé!" << std::endl;
        }
    }
    return 0;
}