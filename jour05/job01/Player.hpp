#pragma once
#include <iostream>

class Player
{
    private:
        int x = 0;
        int y = 0;
    public:
        int getX();
        int getY();
        void displayCoordinates();
        void move(int x, int y);
};