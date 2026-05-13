#include <iostream>
#include <string>
#include <algorithm>

int main(){
    while (true){
        std::string string;
        std::cout << "Veuillez fournir une chaîne de caractère: ";
        std::cin >> string;
        std::string string2 = "Bonjour";
        if(std::lexicographical_compare(string.begin(),string.end(),string2.begin(),string2.end())){
            std::cout << "\"" << string << "\" vient avant \"" << string2 << "\" dans le dictionnaire." << std::endl;
        } else {
            std::cout << "\"" << string2 << "\" vient avant \"" << string << "\" dans le dictionnaire." << std::endl;
        }
    }

    return 0;
}