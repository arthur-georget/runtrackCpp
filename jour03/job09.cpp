#include <iostream>
#include <string>

bool contains(std::string *firstString, std::string *secondString){
    return (*secondString).find(*firstString) != std::string::npos;
}

int main(){
    std::string firstString;
    std::string secondString;
    std::cout << std::boolalpha;
    std::cout << "Veuillez fournir une première chaîne de caractère: ";
    std::cin >> firstString;
    std::cout << "Veuillez fournir une deuxième chaîne de caractère: ";
    std::cin >> secondString;
    std::cout << contains(&firstString,&secondString) << std::endl;
    return 0;
}