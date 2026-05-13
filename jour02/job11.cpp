#include <iostream>
#include <limits>

int main(){
    int n;
    long long factorial;
    while (true)
    {   
        factorial = 1;
        std::cout << "Veuillez fournir un nombre: ";
        if (!(std::cin >> n))
        {
            std::cout << "Erreur: n doit être un nombre." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        }
        for (int i = n; i > 0; i--){
            factorial *= i;
        }
        std::cout << n << "! = " << factorial << std::endl;
    }
    return 0;
}