#include <iostream>

int main(){
    const char* arr[] = {"2019","La Plateforme","3.14","Etudiants"};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < arrSize; i++){
        // arr is a pointer to the first element of the array
        std::cout << "Valeur de arr[" << i << "] : " << *(arr+i) << std::endl;
        std::cout << "Adresse de arr[" << i << "] : " << (arr+i) << std::endl;
    }
    return 0;
}