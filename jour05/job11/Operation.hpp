#pragma once

class Operation{
    private:
        float value;
    public:
        Operation(float value);
        ~Operation();

        float getValue();

        float operator+(const Operation& other) const;
        float operator-(const Operation& other) const;
        float operator*(const Operation& other) const;
        float operator/(const Operation& other) const;
};