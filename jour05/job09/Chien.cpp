#include "Chien.hpp"

Chien::Chien(){};

Chien::~Chien(){};

void Chien::crier(){
    std::cout << "Woof!" << std::endl;
};

void Chien::manger(){
    std::cout << "Le chien a une alimentation variée." << std::endl;
};