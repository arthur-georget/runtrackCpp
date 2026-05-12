#include <iostream>

int main(){
    int n;
    do{
        std::cout << "Donnez un nombre > 0: "; 
        std::cin >> n;
    } while ( n <= 0 );
}