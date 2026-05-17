#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main(){

    Chat *chat = new Chat();

    chat->manger();
    chat->manger("des croquettes");

    delete chat;

    return 0;
}