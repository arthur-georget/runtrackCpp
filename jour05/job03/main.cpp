#include "Player.hpp"

int main(){
    Player *p1 = new Player();
    Player *p2 = new Player(5,3);
    Player *p3 = new Player(6,6,"Jojo");
    p1->displayCoordinates();
    p2->displayCoordinates();
    p3->displayCoordinates();
    delete p1;
}