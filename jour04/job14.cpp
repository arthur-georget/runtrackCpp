#include <iostream>

void changeX(int &ref){
    ref = 20;
}

int main(){
    int x = 12;
    changeX(x);
    std::cout << x << std::endl;
    return 0;
}