#pragma once
#include <string>

class Etudiant{
    private:
        std::string nom;
        std::string prenom;
        int age;
        int matricule;
    public:
        Etudiant(std::string initNom, std::string initPrenom, int initAge, int initMatricule);
};