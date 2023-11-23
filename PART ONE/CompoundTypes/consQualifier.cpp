/**
 *  Defining variables that we can not change
*/
#include <iostream>

int get_size(){
    return 0;
}

int main() {
    const int bufSize = 512; //Input buffer size
    //Because we can not change the value of a const it must be initilized
    const int i = get_size(); // Initialized at run time
    const int j = 24;  // Initialized at compile time

    /**
     *  Reference to Const: A reference that refer to a const type
     *  Reference to const can not be used to change the object it's bound to
    */

    const int ci = 1024;
    const int &r1 = ci; // Both reference and underlying object are const
   /*
    r1 = 42; Error: r1 is a reference to const
    int &r2 = ci; Error: non const reference to a const object
    */

   /**
    *  Pointers to Const: Pointers that points to a constantr
   */
    const double pi = 3.14;   // pi is a constant
    // const *ptr = &pi;  Error ptr is a plain pointer
    const double *cptr = &pi; // cpt may point to a double that is constant
    // *cptr = 45; // Error cannot assign to *cptr

    double dval = 3.14; // dval is a double its value can change
    cptr = &dval; // Ok but can not change dval thru cptr

    /**
     *  Constant pointers: A pointer that itself is a const
     *  The address that it hold cannot change
    */
    int errNumb = 40;
    int *const curErr = &errNumb;  // curErr will always point to errNumb
    const double pi = 3.14159;
    const double *const pip = &pi; // pip is a const pointer to a const object

    /**
     *  Constant Expression: Is na exp that it's value cannot chane and can bw evaluated at compile time
     *  Wether aan object is a const exp depends the types and initializers
    */
    const int max_files = 20; // max_files is a constant exp
    const int limit = max_files + 1; // limit is a cons exp
    int staff_size = 27;  // staff_size is a constant exp
    const int sz = get_size(); //sz is not a const exp

    /**
     *  constexp variables: Using varible constexpr to verify const expressions
    */
    constexpr int mf = 20; // 20 is a constant exp
    constexpr int limit = mf + 1; // mf + 1 is a constant exp
   // constexpr int sz = size();  Ok only if size is a constexpr function 

    return 0;
}

