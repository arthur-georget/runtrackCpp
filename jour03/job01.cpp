#include <iostream>

int main(){
        
    char phrase[] = "vive la plateforme !";
    int phraseLength = sizeof(phrase) / sizeof(phrase[0]);
    for (int i = 0; i < phraseLength; i++){
        phrase[i] = toupper(phrase[i]);
    }
    std::cout << phrase << std::endl;
    return 0;
}