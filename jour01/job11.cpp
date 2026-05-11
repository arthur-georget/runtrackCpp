#include <iostream>

int main(){
    int n;
    int m;
    int cache;

    std::cout << "Bienvenue dans l'échangeur." << std::endl;

    std::cout << "Veuillez renseigner n: ";
    std::cin >> n;
    std::cout << "n est égal à : " << n << std::endl;

    std::cout << "Veuillez renseigner m: ";
    std::cin >> m;
    std::cout << "m est égal à : " << m << std::endl;

    std::cout << "Attention j'échange..." << std::endl;
    
    cache = n;
    n = m;
    m = cache;

    std::cout << "n est égal à : " << n << std::endl;
    std::cout << "m est égal à : " << m << std::endl;

    return 0;

}