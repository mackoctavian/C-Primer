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

   /**
    * We can define multiple references in a single def.
   */
    
    int i = 1024, i2 = 2048, i3 = 6000; // i and i2 are both ints
    int &r = i, r2 = i2; //r is a reference bound to i; r2 is an int
    int &r3 = i3, &r4 = i2; // Both r3 and r4 are references
    return 0;
}