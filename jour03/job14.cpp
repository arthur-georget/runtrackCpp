#include <iostream>
#include <string>
#include <cmath>

int main(){
    std::string tab[] = {"radar","hello","level","stats","world"};
    int tabSize = sizeof(tab) / sizeof(tab[0]);
    for (int i = 0; i < tabSize; i++){
        float stringSize = tab[i].length();
        int halfSize = std::abs(stringSize/2);
        bool isPalindrome = true;
        for (int j = 0; j < halfSize; j++){
            if(tab[i][halfSize+j] != tab[i][halfSize-j]){
                isPalindrome = false;
            }
        }
        if (isPalindrome){
            std::cout << tab[i] << " est un palindrome." << std::endl;
        } else{
            std::cout << tab[i] << " n'est pas un palindrome." << std::endl;
        }
    }
    return 0;
}