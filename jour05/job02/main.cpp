#include "Player.hpp"

int main(){
    Player *p1 = new Player();
    p1->displayCoordinates();
    p1->move(4,32);
    p1->displayCoordinates();
    p1->move(34,2);
    p1->displayCoordinates();
    p1->move(87,3);
    p1->displayCoordinates();
    delete p1;
}