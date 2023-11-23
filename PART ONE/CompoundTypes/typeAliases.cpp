/**
 *  type alias: is a name that is synonym to another
*/
#include <iostream>

int main() {
    typedef double wages; // wages is a synonym of double
    typedef wages base, *p; //Base is a synonym for double, p for double*
    
    /**
     *  The Auto specifier: letting the compiler figure out the type of a variable
    */
    auto i = 0, *p = &i; // i is an int and p is a pointer to int
    return 0;
}