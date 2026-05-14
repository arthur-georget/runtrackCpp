#include <iostream>
#include <string>

int main(){
    while(true){
        std::string string;
        std::cout << "Veuillez fournir une chaîne de caractère à inverser : "; 
        std::getline(std::cin, string);
        char* beginPointer = &string[0];
        char* endPointer = &string[string.length() - 1];
        std::string reversedString;
        //std::cout << *beginPointer << *endPointer << std::endl;
        char* indexPointer = endPointer;
        while (indexPointer != (beginPointer-1)){
            reversedString += *indexPointer;
            indexPointer--;
        }
        std::cout << reversedString << std::endl;
    }
}