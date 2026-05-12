#include <iostream>

int main(){
    int N;
    int sum = 0;
    std::cout << "Veuillez fournir un entier N: ";
    std::cin >> N;
    if( N < 5){
        for (int i = N; i <= 5; i++){
            sum += (N*N*N);
        }
    } else if ( N > 5){
        for (int i = N; i >= 5; i--){
            sum += (N*N*N);
        }
    } else {
        sum = 125;
    }
    std::cout << "Voici la somme des cubes de 5^3 à " << N << "^3: " << sum << std::endl;
    return 0;
}