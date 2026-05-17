#include "Character.hpp"

Character::Character(std::string initName, int initLifePoints, float initDefense) : name(initName), lifePoints(initLifePoints), defense(initDefense){};
Character::~Character(){};

std::string Character::getName(){
    return this->name;
};

void Character::setName(std::string newName){
    this->name = newName;
};

int Character::getLifePoints(){
    return this->lifePoints;
};

void Character::setLifePoints(int newLifePoints){
    this->lifePoints = newLifePoints;
};

float Character::getDefense(){
    return this->defense;
};

void Character::setDefense(float newDefense){
    this->defense = newDefense;
};