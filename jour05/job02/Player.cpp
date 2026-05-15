#include "Player.hpp"

Player::Player() : x(0), y(0){};
Player::~Player(){};

int Player::getX(){
    return this->x;
};

int Player::getY(){
    return this->y;
};

void Player::displayCoordinates(){
    std::cout << "Player is at (" << x << ", " << y << ")" << std::endl;
};

void Player::move(int x, int y){
    this->x = x;
    this->y = y;
};