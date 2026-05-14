#include <iostream>

int main(){
    int arr[] = {3,1,5,2,7,5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < arrSize; i++){
        // arr is a pointer to the first element of the array
        std::cout << "Valeur de arr[" << i << "] : " << *(arr+i) << std::endl;
        std::cout << "Adresse de arr[" << i << "] : " << (arr+i) << std::endl;
    }
    return 0;
}