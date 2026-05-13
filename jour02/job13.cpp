#include <iostream>
#include <iomanip> 

int main() {
    std::cout << "    I";
    for (int i = 1; i <= 10; i++) {
        std::cout << std::setw(4) << i; 
    }
    std::cout << "\n------------------------------------------------\n";

    for (int i = 1; i <= 10; i++) {
        std::cout << std::setw(3) << i << " I";
        
        for (int j = 1; j <= 10; j++) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}