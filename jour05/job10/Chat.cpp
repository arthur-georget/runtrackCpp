#include "Chat.hpp"

Chat::Chat(){};

Chat::~Chat(){};

void Chat::crier(){
    std::cout << "Miaou!" << std::endl;
};

void Chat::manger(){
    std::cout << "Le chat mange du poisson." << std::endl;
};

void Chat::manger(std::string typeDeNourriture){
    std::cout << "Le chat mange " << typeDeNourriture << "." << std::endl;
};