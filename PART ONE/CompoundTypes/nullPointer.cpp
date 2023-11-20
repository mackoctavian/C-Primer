/**
 * Null Pointer does not point to any object
*/
#include <iostream>

int main() {
    int *p1 = nullptr; // Equivalent to int *p1 = 0
    int *p2 = 0; // Directly initilizes p2 from literal constant 0
    int *p3 = NULL; //Equivalent to int *p3 = 0;

    /**
     *  Assignment and pointers
    */

    int i = 5;
    int *p4 = 0; // p4 is initilized but addresses no object
    int *p5 = &i; // p5 is initilized to hold the address of i
    int *p6; // P6 is uninitilized
    p6 = p5; // p6 and p5 addresses the smae object i.e i
    p5 = 0;  // p5 now addresses no object
    return 0;
}