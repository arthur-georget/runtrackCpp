#include <iostream>
#include <string>

int main(){
    std::string userInput;
    std::string reversedInput;
    std::cout << "Veuillez fournir un nombre à inverser: ";
    std::cin >> userInput;
    int strLength = userInput.length();
    for (int i = 0; i  < strLength/2; i++){
        std::swap(userInput[i], userInput[strLength -i - 1]);
    }
    std::cout << "Voici le chiffre inversé: " << userInput << std::endl;
    return 0;
}