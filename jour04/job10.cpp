#include <iostream>
#include <limits>
#include <string>
#include <vector>

struct Grade{
    std::string firstname;
    std::string lastname;
    float grade;
};

void askUserGradeInput(Grade &rfNewGrade){
    std::cout << "Veuillez renseigner le prénom de l'élève : ";
    std::cin >> rfNewGrade.firstname;
    std::cout << "Veuillez renseigner le nom de l'élève : ";
    std::cin >> rfNewGrade.lastname;
    while (true){
        rfNewGrade.grade = 0;
        std::cout << "Veuillez renseigner la note de l'élève : ";
            if (!(std::cin >> rfNewGrade.grade) || rfNewGrade.grade > 20 || rfNewGrade.grade < 0)
            {
                std::cout << "Erreur: la note doit être un nombre entier comprise entre 0 et 20." << std::endl;
                std::cin.clear();                                                   // Reset the error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
                continue;
            }
            break;
    }
}

void addGrade(std::vector<Grade> &rfGrades){
    Grade newGrade;
    askUserGradeInput(newGrade);
    rfGrades.push_back(newGrade);
}

void displayGrades(std::vector<Grade> &rfGrades){
    std::cout << "------------------------------------" << std::endl;
    int index = 1;
    for (Grade grade : rfGrades){
        std::cout << "Index: " << index << " - ";
        std::cout << "Prénom: " << grade.firstname << " - ";
        std::cout << "Nom: " << grade.lastname << " - ";
        std::cout << "Note: " << grade.grade << std::endl;
        index++;
    }
}

void deleteGrade(std::vector<Grade> &rfGrades){
    if (rfGrades.empty()) {
        std::cout << "La liste est vide, rien à supprimer." << std::endl;
        return;
    }
    int index;
    while(true){
        std::cout << "Veuillez renseigner l'index de la note que vous voulez supprimer: ";
        if (!(std::cin >> index) || index < 1 || index > rfGrades.size()){
            std::cout << "Erreur: l'index fourni n'est pas un entier positif ou ne correspond à aucune note." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        }
        break;
    }
    rfGrades.erase(rfGrades.begin() + (index - 1)); 
    std::cout << "Note supprimée avec succès !" << std::endl;
}

void displayMean(std::vector<Grade> &rfGrades){
    std::cout << "------------------------------------" << std::endl;
    float mean = 0;
    for (Grade grade : rfGrades){
        mean += grade.grade;
    }
    mean /= rfGrades.size();
    std::cout << "La moyenne de la classe est " << mean << std::endl;
}

int askUserChoice(){
    int i;
    while (true){
        i = 0;
        std::cout << "Choix: ";
            if (!(std::cin >> i))
            {
                std::cout << "Erreur: n doit être un nombre entier." << std::endl;
                std::cin.clear();                                                   // Reset the error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
                continue;
            }
            break;
    }
    return i;
}

int displayMenu(){
    std::cout << "====================================" << std::endl;
    std::cout << "Menu :" << std::endl;
    std::cout << "1. Ajouter une note" << std::endl;
    std::cout << "2. Afficher la liste de notes" << std::endl;
    std::cout << "3. Supprimer une note d'un etudiant" << std::endl;
    std::cout << "4. Afficher la moyenne des notes" << std::endl;
    std::cout << "5. Quitter" << std::endl;
    return askUserChoice();
}

bool handleUserChoice(int userChoice, std::vector<Grade> &rfGrades){
    switch (userChoice) {
            case 1:
                addGrade(rfGrades);
                break;
            case 2:
                displayGrades(rfGrades);
                break;
            case 3:
                deleteGrade(rfGrades);
                break;
            case 4:
                displayMean(rfGrades);
                break;
            case 5:
                return false;
            default:
                std::cout << userChoice << " ne fait pas partie des choix possibles." << std::endl; 
                break;
    }
    return true;
}

int main(){
    std::vector<Grade> grades;
    while (true){
        if (!handleUserChoice(displayMenu(),grades)){
            break;
        };
    }
    return 0;
}