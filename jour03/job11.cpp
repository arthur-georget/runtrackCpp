#include <iostream>

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    for(int i = 0; i < arraySize; i++){
        if (array[i] % 2 == 0){
            sum += array[i];
        }
    }
    std::cout << sum;
    return 0;
}