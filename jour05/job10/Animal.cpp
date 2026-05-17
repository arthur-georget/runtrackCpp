#include "Animal.hpp"

int Animal::totalAnimaux = 0;

Animal::Animal(){
    this->totalAnimaux++;
};

Animal::~Animal(){};
