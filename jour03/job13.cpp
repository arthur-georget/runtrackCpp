#include <iostream>
#include <bits/stdc++.h>

void bubbleSort(int array[], int arraySize){
    for (int i = 0; i < arraySize - 1; i++){
        for (int j = 0; j < arraySize - i - 1; j++){
            if(array[j] > array[j+1]){
                std::swap(array[j], array[j+1]);
            }
        }
    }
}

int main(){
    int array1[] = {43,23,65,85,16,84,25};
    int array2[] = {856,234,654,23,87,98,65};
    int array1Size = sizeof(array1) / sizeof(array1[0]);
    int array2Size = sizeof(array2) / sizeof(array2[0]);
    int mergeArraySize = array1Size + array2Size;
    int mergeArray[mergeArraySize];
    for (int i = 0; i < array1Size; i++){
        mergeArray[i] = array1[i];
    }
    for (int i = 0; i < array2Size; i++){
        mergeArray[i+array1Size] = array2[i];
    }
    for(int i = 0; i < mergeArraySize / 2; i++){

    }

    bubbleSort(mergeArray, mergeArraySize);

    for (int i = 0; i < mergeArraySize; i++){
        std::cout << mergeArray[i] << std::endl;
    }
    
    return 0;
}