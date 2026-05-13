#include <iostream>
#include <limits>
#include <cmath>

int countDecimals(int n) {
    if (n == 0) return 1;
    int count = 0;
    n = std::abs(n);
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main(){
    int n;
    while (true)
    {   
        std::cout << "Veuillez fournir un nombre: ";
        if (!(std::cin >> n))
        {
            std::cout << "Erreur: n doit être un nombre." << std::endl;
            std::cin.clear();                                                   // Reset the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            continue;
        }
        int temp = n;
        int nSize = countDecimals(n);
        int sum = 0;
        while (temp > 0)
        {
            int digit = temp%10;
            temp /= 10;
            sum += std::pow(digit,nSize);
        }
        if (sum==n){
            std::cout << "Narcissique" << std::endl;
        } else {
            std::cout << "Pas narcissique" << std::endl;
        }
    }
    return 0;
}