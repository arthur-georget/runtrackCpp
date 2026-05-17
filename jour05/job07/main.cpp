#include "Contact.hpp"
#include <iostream>

int main(){

    Contact *c1 = new Contact("Jojo", 1);
    Contact *c2 = new Contact("Bobo", 2);
    Contact *c3 = new Contact("Titi", 3);

    Contact *copyC1 = new Contact(*c1);
    copyC1->setName("Tonton");
    
    Contact *copyC2 = new Contact(*c2);
    copyC2->setName("Coco");

    Contact *copyC3 = new Contact(*c3);
    copyC3->setName("Mimi");

    std::cout << "Le numéro de " << c1->getName() << " est " << c1->getNumber() << std::endl;
    std::cout << "Le numéro de " << c2->getName() << " est " << c2->getNumber() << std::endl;
    std::cout << "Le numéro de " << c3->getName() << " est " << c3->getNumber() << std::endl;
    std::cout << "Le numéro de " << copyC1->getName() << " est " << copyC1->getNumber() << std::endl;
    std::cout << "Le numéro de " << copyC2->getName() << " est " << copyC2->getNumber() << std::endl;
    std::cout << "Le numéro de " << copyC3->getName() << " est " << copyC3->getNumber() << std::endl;

    std::cout << "======================================" << std::endl;

    c1->setNumber(4);
    c2->setNumber(5);
    c3->setNumber(6);

    std::cout << "Le numéro de " << c1->getName() << " est " << c1->getNumber() << std::endl;
    std::cout << "Le numéro de " << c2->getName() << " est " << c2->getNumber() << std::endl;
    std::cout << "Le numéro de " << c3->getName() << " est " << c3->getNumber() << std::endl;
    std::cout << "Le numéro de " << copyC1->getName() << " est " << copyC1->getNumber() << std::endl;
    std::cout << "Le numéro de " << copyC2->getName() << " est " << copyC2->getNumber() << std::endl;
    std::cout << "Le numéro de " << copyC3->getName() << " est " << copyC3->getNumber() << std::endl;

    delete c1,c2,c3,copyC1,copyC2;
    return 0;
}