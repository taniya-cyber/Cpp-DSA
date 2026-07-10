#include<iostream>

/* -> Const Keyword: This keyword is used to make a variable/ object or function IMMUTABLE, or we can say to Declare a variable, object & Function imMutable, means its value can't be changed after initialization.
-> And any attempt to modify its value will result in compilation error. 
-> We can declare a function as const which means the function does not modify the state of object it is called on.
-> Compiler stores const variable in Read - Only memory, leading to faster access. Computer does not need to take load about if they would be reassigned.
-> It is like a PROMISE*/

int main(){
// const int a = 3;
// a = 2; //Here, it is giving error: "expression must be a modifiable lvalue", so we have a concept:

/*Lvalue, and Rvalue:
lvalue: Variables having a memory location, eg. int a = 3; , char ch = 'b';


rvalue: Variables not having a memory location, eg. 5 (it is just a constant value), int &b = a (&b has no location, its just another name of a)
C++ does not define where rvalues (temporary objects) are stored. Their storage is implementation‑dependent, and compilers may place temporaries in registers, on the stack, or optimize them away entirely.
Temporary objects do not have a formal “storage duration”, unlike objects with static/automatic/dynamic storage. Their lifetime follows special temporary‑object rules, not a specific storage class */

// const int x = 3;
// int *p = &x;
// *p = 10; //In old compilers, with this way, value could be modified, but not now.

//Const with Pointer:





    return 0;
}