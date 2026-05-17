#include "Chien.hpp"
#include "Chat.hpp"

int main(){
    Chien *chien = new Chien();
    Chat *chat = new Chat();

    chien->crier();
    chien->manger();

    chat->crier();
    chat->manger();

    delete chien;
    delete chat;
    
    return 0;
}