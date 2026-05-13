#include <iostream>

int main(){
        
    char phrase[] = "vive la plateforme !";
    int phraseLength = sizeof(phrase) / sizeof(phrase[0]);
    std::cout << "La taille est " << phraseLength - 1 << std::endl;
    return 0;
}