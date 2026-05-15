#include <iostream>

int getMaxValue(int (&ref)[5]){
    int max = ref[0];
    for(int i=0; i < 5; i++){
        if (ref[i] > max){
            max = ref[i];
        }
    }
    return max;
}

int main(){
    int array[] = {154,22,32,4986,53};
    std::cout << getMaxValue(array) << std::endl;
    return 0;
}