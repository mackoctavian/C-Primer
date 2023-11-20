/**
 * Doing quiz on pointers
*/
#include <iostream>

int main() {
    /**
     *  QN: Write Code to change a value of a pointer
     *      Write Code to change the value to which the pointer points
    */
    //Code to change the value of a pointer
    int i = 100;
    int *ptr1 = &i; //Here the pointer holds the address of na object i
    ptr1 = 0; // Changed the value of a pointer from the address of i to null

    //Code to change the value to which a pointer points
    int *ptr2 = &i; //Initilized ptr2 to hold address of object i
    *ptr2 = 5; // Used a dereference operator to change the value of object i using a pointer
    return 0;
}