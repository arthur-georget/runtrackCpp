#include "Operation.hpp"

Operation::Operation(float initValue){
    this->value = initValue;
};

Operation::~Operation(){};

float Operation::getValue(){
    return this->value;
};

float Operation::operator+(const Operation& other) const{
    return this->value + other.value;
};

float Operation::operator-(const Operation& other) const{
    return this->value - other.value;
};

float Operation::operator*(const Operation& other) const{
    return this->value * other.value;
};

float Operation::operator/(const Operation& other) const{
    return this->value / other.value;
};