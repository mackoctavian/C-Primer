/*
 * A program to display the size of primitive data types in bytes
 */
#include <iostream>

//Function main entry point of the program
int main() {
    //Printing the size in the console
    std::cout << "The size of char: " << sizeof(char) << std::endl;
    std::cout << "The size of int: " << sizeof(int) << std::endl;
    std::cout << "The size of short int: " << sizeof(short int) << std::endl;
    std::cout << "The size of long int: " << sizeof(long int) << std::endl;
    std::cout << "The size of float: " << sizeof(float) << std::endl;
    std::cout << "The size of double: " << sizeof(double) << std::endl;
    std::cout << "The size of wchar_t: " << sizeof(wchar_t) << std::endl;

    //Returning 0
    return 0;
}