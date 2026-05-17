#pragma once
#include "Animal.hpp"

class Chien : public Animal {
    public:
        Chien();
        ~Chien();
        void crier() override;
        void manger() override;
};