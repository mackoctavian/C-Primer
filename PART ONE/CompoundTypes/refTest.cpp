/**
 * QN: What does the following code print?
*/
#include <iostream>

int main() {

    int i, &ri = i;
    //Assign i to 5 then resign i through a reference ri to 10
    i = 5; ri = 10;
    //Both i and its reference ri is 10
    std::cout << i << " " << ri << std::endl;
    /**
     * ANS: The output of the program is 10 10
    */
    return 0;
}