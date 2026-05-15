#include <iostream>

void displayArray(int (&ref)[5]){
    for(int i=0; i <5; i++){
        std::cout << ref[i] << std::endl;
    }
}

int main(){
    int array[] = {1,2,3,4,5};
    displayArray(array);
    return 0;
}