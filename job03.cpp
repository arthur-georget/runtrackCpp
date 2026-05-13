#include <iostream>

int phraseChecker(){
    char phrase1[] = "vive la plateforme !";
    char phrase2[] = "vive la plateforme !";
    int phrase1Length = sizeof(phrase1) / sizeof(phrase1[0]);
    int phrase2Length = sizeof(phrase2) / sizeof(phrase2[0]);
    if (phrase1Length == phrase2Length){
        bool match = true;
        for (int i = 0; i < phrase1Length; i++){
            if(phrase1[i] != phrase2[i]){
                match = false;
                break;
            }
        }
        if (match){
            return 0;
        }
    }
    return 1;
}

int main(){
    std::cout << phraseChecker() << std::endl;
}