#include<iostream>

int main(){
    /*Pointer: A pointer is a variable that stores address of a variable. 
    &a means Address Of "a". 
    Derefernce Operator, denoted by: asterisk (*), is used in programming to access the value stored at the memory address pointed to by a pointer.

     This also means that int *ptr => pointer To INTEGER.
    */
    // int a = 5;
    // int *ptr = &a; //"go to the address stored in ptr and read the value"
    //int *p = nullptr; //A pointer when initialised, should not be initialised like -> int *ptr; , and can be: 0, NULL or nullptr. 
    // std::cout<< a <<std::endl;
    // std::cout<< &a <<std::endl; //address of a
    // std::cout<< ptr <<std::endl; //address of a
    // std::cout<< *ptr <<std::endl;
    // *ptr = *ptr + 1;
    // std::cout<< a <<std::endl;

    //DYNAMIC MEMORY ALLOCaTION by heap :-)
    //Here, *ptr is inside the Stack memory and new int is space allocated inside the heap memory, and stack memory's pointer ptr is pointing towards new int space.

    // int *ptr = new int;
    //new int; -> This returns Address of memory location created in heap using "new" keyword. And storing address has only one way, that is A POINTER. KHATAM. 
    // *ptr = 10; //Assigning value to heap location which is empty through *ptr means denoting what is present at location denoted by ptr. 
    // std::cout<< "*ptr means WHAT IS THE VALUE POINTED BY ptr:  " << *ptr <<std::endl;
    // std::cout<< "&ptr means ADRESS OF PTR, which is in stack memory:  " << &ptr <<std::endl;
    // std::cout<< "ptr means WHAT IS INSIDE THE ptr box in stack memory:  " << ptr <<std::endl;
    //Deallocating as in C++, there is no automatic deallocation mechanism :-> So, delete() keyword is used.
    //  delete(ptr);
    //  std::cout<< "Seeing if its deleted or not  " << *ptr <<std::endl;
    //it is deleted as its printing garbage values. 

    //Initializing array dynamically using heap:
    // int *p = new int [3]; //int[3] makes 3 spaced array.
    // //can be accessed by p[0], [1].... which is converted into -> *(p +0) 
    // p[0] = 10;
    // *(p +1) = 233;
    // *(p +2) = 0322;
    // //Printing/Accessing/Traversing the array:
    // for(int i = 0; i < 3; i++){
    //     std::cout<< *(p +i) << std::endl;
    // }

    // //deleting array:
    // delete []p;

    /*Why int arr[n] is bad practice? 
    -> Because: suppose if we do this: 
    int size;
    cin>>size;
    int arr[n]; //means taking size as input, and input can be any big number but int arr[n] is in static memory, so it can't be a large number. But we can use it as below:
    int size;
    cin>>size;
    int *arr = new int[size]; //doing this is still fine but the above practice is not good as above, it takes static memory which is limited and in this way (using new keyword) it takes heap memory which is not fixed/ is dynamic.
    */
    
    //Pointer Arithmetics: Addition, Substraction, Difference, Comparison
    //Addition: It is of two types: (*ptr) + 1 and *(ptr + 1) both are different:
    // char *ctr = new char[5];
    // *(ctr + 0) = 'a'; 
    // *(ctr + 1) = 'b'; 
    // *(ctr + 2) = 'c'; 
    // *(ctr + 3) = 'd'; 
    // *(ctr + 4) = 'e'; 
    // // for(int i = 0; i < 5; i++){
    // //     *(ctr + i) = 'a'; //assigned a to all 5 indices.
    // // }
    // //Performing Addition:
    // std::cout<< (*ctr) + 1 <<std::endl; // (*ctr) means the value it is pointing of contained address, i.e., base address of array which has 'a', and +1 means adding 1 to ASCII value of "a", 97+1 = 98 -> 'b'. So, now, it has 'b' instead of a at Base Address.
    // std::cout<< *(ctr + 1) <<std::endl;//(ctr) means the location/the address(contained by ctr), which is base address of the array, and +1 means moving one step ahead, as it is char, so, 1 byte difference. Therefore, it is pointing towards index 1 of array, so printing 'b'.

    // //Double Pointer: It means we have pointer, pointing to another pointer. 
    // int a = 5;
    // int *ptr = &a;
    // int **ctr = &ptr;
    // int ***dtr = &ctr;
    // std::cout<< "Result for a, Prints value of a:  " << a <<std::endl;
    // std::cout<< "Result for &a, prints ADDRESS OF a:  " << &a <<std::endl;
    // //std::cout<< "Result for *a  " << *a <<std::endl; Gives error
    // std::cout<< "Result for *ptr, prints whats inside the box pointed by ptr:  " << *ptr <<std::endl;
    // std::cout<< "Result for ptr, what is inside ptr(address of a):  " << ptr <<std::endl;
    // std::cout<< "Result for &ptr, prints address of ptr:  " << &ptr <<std::endl;
    // std::cout<< "Result for ctr, what is in ctr (address of ptr):  " << ctr <<std::endl;
    // std::cout<< "Result for &ctr, prints address of ctr:  " << &ctr <<std::endl;
    // std::cout<< "Result for *ctr, prints whats inside the box (ptr), which is pointed by ctr (means address of a):  " << *ctr <<std::endl;
    // std::cout<< "Result for **ctr,  prints value of a as ctr has address of ptr and ptr has address of a:  " << **ctr <<std::endl;
    // std::cout<< "Result for dtr, prints address of ctr:  " << dtr <<std::endl;
    // std::cout<< "Result for &dtr, prints address of dtr:  " << &dtr <<std::endl;
    // std::cout<< "Result for *dtr, prints ctr's value(address of ptr):  " << *dtr <<std::endl;
    // std::cout<< "Result for **dtr, prints whats in ptr (address of a):  " << **dtr <<std::endl;
    // std::cout<< "Result for ***dtr, prints the value of a:  " << ***dtr <<std::endl;
    
    return 0;
}