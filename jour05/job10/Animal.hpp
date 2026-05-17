#pragma once
#include <iostream>

class Animal{
    private:
        static int totalAnimaux;

    public:
        Animal();
        ~Animal();
        
        static int getTotalAnimaux(){
            return totalAnimaux;
        };

        virtual void crier() = 0;
        virtual void manger() = 0;
};