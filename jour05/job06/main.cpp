#include "Character.hpp"
#include <iostream>

int main(){
    Character *p1 = new Character("Riko",100,5.3);
    Character *p2 = new Character("Reg",90,3.4);
    Character *p3 = new Character("Nanatchi", 120, 5.3);
    
    std::cout << p1->getName() << " has " << p1->getLifePoints() << " life points." << std::endl;
    p1->setLifePoints(50);
    std::cout << p1->getName() << " has " << p1->getLifePoints() << " life points." << std::endl;
    
    delete p1,p2,p3;
    return 0;
}