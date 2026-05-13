#include <iostream>
#include <limits>

int main(){
    float n;
    float harmonicSerial;
    while (true)
    {   
        harmonicSerial = 0;
        std::cout << "Veuillez fournir un nombre entier positif: ";
        if (!(std::cin >> n))
        {
            std::cout << "Erreur: n doit être un nombre réel." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        } else if (n < 0){
            std::cout << "Erreur: n doit être un nombre positif." << std::endl;
            continue;
        }
        for (float i = 1; i <= n; i++){
            harmonicSerial += (1/i);
        }
        std::cout << "La somme des " << n << " premiers éléments de la série harmonique est égale à: " << harmonicSerial << std::endl;
    }
    return 0;
}