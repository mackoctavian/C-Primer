/**
 * A pointer is a compound type that points to another type
 * Like reference they are used to indirect access to other objects
 * Unlike references pointer are object in its on own right
*/
#include <iostream>

int main() {
    int *ip1, *ip2; //Both ip1 and ip2 are pointers to int
    /**
     * A pointer holds the address of an object
     * We get the address of an object by using the address-of operator (&) 
    */
    int ival = 42;
    int *p = &ival; // p holds the address of ival; p is a pointer to ival

    //Using a dereference operator(*) to access the object
    *p = 0; //* yields the object; Assigning 0 to ival through p
    std::cout << *p; // Prints 0;

    return 0;
}