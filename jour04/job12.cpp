#include <iostream>
#include <string>

struct Staff{
    std::string firstname;
    std::string lastname;
};

struct Etudiant{
    std::string firstname;
    std::string lastname;
};


int main(){
    const int staffSize = 2;
    Staff staff[staffSize];
    staff[0].firstname = "Alicia";
    staff[0].lastname = "Cordial";
    staff[1].firstname = "Pierre";
    staff[1].lastname = "Malardier";
    for(int i = 0; i < staffSize; i++){
        std::cout << staff[i].firstname << std::endl;    
    }

    int etudiantsSize;
    std::cout << "Veuillez fournir le nombre d'étudiants que vous voulez entrer: ";
    std::cin >> etudiantsSize;
    Etudiant* etudiants = new Etudiant[etudiantsSize];
    for (int i = 0; i < etudiantsSize; i++){
        std::cout << "Veuillez fournir le prénom de l'étudiant numéro " << i+1 << " sur " << etudiantsSize << " : ";
        std::cin >> etudiants[i].firstname;
        std::cout << "Veuillez fournir le nom de l'étudiant numéro " << i+1 << " sur " << etudiantsSize << " : ";
        std::cin >> etudiants[i].lastname;
    }
    std::cout << "Voici les étudiants fournis: "; 
    for (int i = 0; i < etudiantsSize; i++){
        std::cout << etudiants[i].firstname << " ";
    }
    delete[] etudiants;
    std::cout << std::endl;
    return 0;
}