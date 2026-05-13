#include <iostream>

int main(){
        
    char phrase[] = "vive la plateforme !";
    int phraseLength = sizeof(phrase) / sizeof(phrase[0]);
    for (int i = 0; i < phraseLength; i++){
        switch (phrase[i])
        {
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
            phrase[i] = ' ';
            break;
        default:
            break;
        }
    }
    std::cout << phrase << std::endl;
    return 0;
}