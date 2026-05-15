#pragma once
#include <iostream>

class Player
{
    private:
        int x;
        int y;
    public:
        Player();
        ~Player();
        int getX();
        int getY();
        void displayCoordinates();
        void move(int x, int y);
};