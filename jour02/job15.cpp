#include <iostream>
#include <limits>

int main(){
    int n;
    while (true)
    {   
        std::cout << "Veuillez fournir un nombre entier positif: ";
        if (!(std::cin >> n))
        {
            std::cout << "Erreur: n doit être un nombre entier." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        } else if (n < 0){
            std::cout << "Erreur: n doit être un nombre positif." << std::endl;
            continue;
        }
        int fibonacci[n];
        if (n >= 0){
            fibonacci[0] = 0;
            if (n >= 1){
                fibonacci[1] = 1;
                if (n >= 2){
                    fibonacci[2] = 1;
                    if (n >= 3){
                        int i = 3;
                        do {
                            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
                            i++;
                        } while (i <= n);
                    }
                }
            }
        }
        std::cout << "Voici les " << n << " premiers termes de la suite de Fibonacci." << std::endl;
        for(int i = 1; i <= n; i++){
            std::cout << fibonacci[i-1] << std::endl;
        }
    }
    return 0;
}