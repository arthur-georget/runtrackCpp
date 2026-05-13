#include <iostream>

int main(){
    
    int size = 10;
    char tab[100];
    std::cout << "Veuillez fournir une chaine de caractère: ";
    std::cin.getline(tab, 100);
    std::cout << "Voici la chaîne fournie: " << tab << std::endl;
    return 0;
}