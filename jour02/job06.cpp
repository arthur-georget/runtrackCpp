#include <iostream>

int main(){
    int n = 50;
    for (int i = 0; i <=n; i++){
        if (i == 0){
            std::cout << i << std::endl;
        } else if (i%3 == 0){
            if (i%5 == 0){
                std::cout << i << " est un multiple de 3 et de 5." << std::endl;
            } else {
                std::cout << i << " est un multiple de 3." << std::endl;
            }
        } else if (i%5 == 0){
            std::cout << i << " est un multiple de 5." << std::endl;
        } else {
            std::cout << i << std::endl;
        }
    }
    return 0;
}