#pragma once
#include "Animal.hpp"

class Chat : public Animal {
    public:
        Chat();
        ~Chat();
        void crier() override;
        void manger() override;
        void manger(std::string typeDeNourriture);
};