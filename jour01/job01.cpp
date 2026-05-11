#include <iostream>

int main(){
    char c = '\x01'; // c is an Hexadecimal literal for a non-printable character (Start of Heading)
    short int p = 10; // p is a short int
    short int w, x, y, z;
    x = p + 3;
    y = c + 1;
    z = p + c;
    w = 3 * p + 5 * c;
    std::cout << "Value of c should not print anything: " << c << std::endl;
    std::cout << "Value of p: " << p << std::endl;
    std::cout << "Value of w: " << w << std::endl;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of y: " << y << std::endl;
    std::cout << "Value of z: " << z << std::endl;
    return 0;
}