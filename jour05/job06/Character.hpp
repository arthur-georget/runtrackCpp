#pragma once
#include <string>

class Character{
    private:
        std::string name;
        int lifePoints;
        float defense;
    public:
        Character(std::string initName, int initLifePoints, float initDefense);
        ~Character();

        std::string getName();
        void setName(std::string newName);

        int getLifePoints();
        void setLifePoints(int newLifePoints);

        float getDefense();
        void setDefense(float newDefense);
};