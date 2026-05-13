#include <iostream>
#include <string>
#include <regex>

int main(){
    while(true){
        std::string hour;
        std::regex regex(R"(^([01][0-9]|2[0-3])h[0-5][0-9]$)");
        std::cout << "Quelle heure est-il? (Au format XXhXX) : "; 
        std::cin >> hour;
        if(!std::regex_match(hour, regex)){
            std::cout << "L'heure n'est pas au bon format (ex: 14h38) : " << std::endl; 
        } else {
            std::cout << "Il est " << hour << std::endl;
        }
    }
}