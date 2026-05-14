// Job11 trial
// The idea was to get console first char* arg 
// and convert it to an int[]
// I used pointers, references and Ascii values
// But at the end the complexity was probably 
// to big for the aim. -> WIP

#include <iostream>
#include <algorithm>
#include <iterator>

int myArray[] = {159,1,2,3,4,5,6,7,8,9,10}; 

int main(int argc, char** argv){
    /* std::cout << "Have " << argc << " arguments:\n";
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << "\n";
    } */
    if (argc >= 2){
        char* array = argv[1];
        int arraySize = 1;
        int i = 0;
        int validIntAsciiValues[] = {75,-4,0,1,2,3,4,5,6,7,8,9};
        while (true) {
            int integer = *(array + i) - '0';
            int* pointInteger = &integer;
            i++;   
            if (!std::any_of(std::begin(validIntAsciiValues), std::end(validIntAsciiValues), [&](int i){return i == integer;})){
                break; // If integer is not in validIntAsciiValues, it stops the loop
            } else if (integer == -4){
                arraySize++;
            }
            std::cout << pointInteger << std::endl;
            std::cout << integer << std::endl; 
        }
        std::cout << arraySize << std::endl;
        int intArray[arraySize];
    }
    return 0;
}