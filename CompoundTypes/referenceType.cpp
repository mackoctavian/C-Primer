/**
 * Reference type refers to antother type
 * It defines an alternative name for an object
*/
#include <iostream>

int main() {
    int ival = 1024;
    int &refVal = ival; //refVal refers to(another name for) ival

    /**
     * After a reference as been defined, all operations on that reference
     * are actually operations on the object to which the reference is bound
    */
   refVal = 2;  // Assigns 2 to the object to which refeVal refers i.e ival
   int ii = refVal; // Same as ii = ival
    return 0;
}