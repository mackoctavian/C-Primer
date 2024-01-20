/**
 * QN: Write a program that uses the multiplication operator, *, to print the product
*/
#include <iostream>

int main() {
    std::cout << "Enter two numbers: ";
    std::cout << std::endl;
    int m1 = 0, m2 = 0;
    std::cin >> m1 >> m2;
    std::cout << "The product of " << m1 << " and " << m2 << " is " << m1 * m2 << std::endl;
    return 0;
}