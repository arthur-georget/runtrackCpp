#include <iostream>

struct Point{
    int x;
    int y;
};

int main(){
    Point p1;
    Point* p1Pointer = &p1;
    p1Pointer->x = 3245;
    p1Pointer->y = 987;

    std::cout << "p1.x: " << p1.x << std::endl;
    std::cout << "p1.y: " << p1.y << std::endl;
    return 0;
}