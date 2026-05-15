#pragma once
#include <iostream>
#include <string>

class Player
{
    private:
        int x;
        int y;
        std::string name;
    public:
        Player();
        Player(int x, int y);
        Player(int x, int y, std::string name);
        ~Player();
        int getX();
        int getY();
        void displayCoordinates();
        void move(int x, int y);
};