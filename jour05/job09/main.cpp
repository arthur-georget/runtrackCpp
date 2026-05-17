#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main(){

    std::cout << Animal::getTotalAnimaux() << std::endl;

    Chien *chien = new Chien();
    Chat *chat = new Chat();

    std::cout << Animal::getTotalAnimaux() << std::endl;

    delete chien;
    delete chat;

    return 0;
}