#include "Contact.hpp"

Contact::Contact(std::string initName, int initNumber) : name(initName), number(initNumber) {};

Contact::Contact(const Contact &contactToCopy) : name(contactToCopy.name), number(contactToCopy.number) {};

Contact::~Contact(){};

std::string Contact::getName(){
    return this->name;
};

void Contact::setName(std::string newName){
    this->name = newName;
};

int Contact::getNumber(){
    return this->number;
};

void Contact::setNumber(int newNumber){
    this->number = newNumber;
};