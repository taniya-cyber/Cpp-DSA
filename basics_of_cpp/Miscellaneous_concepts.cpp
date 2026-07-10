#include<iostream>
//1. Global and Local Variable:
int x = 5; //Global Variable

void func(){
    int x =  43;
    ::x = 298; //Changing value of global x only for this func.
    std::cout<< x << std::endl; //Printing x within scope of func()
    std::cout<< ::x << std::endl; //LOCAL ONE, whose value is change to 298
}
int main(){
    //these {curly braces} are known as scope of int main. 
    x = 2; //Global x, can also be written as ::x -> to access global var.
    int x = 21; //Local to main()
    std::cout<< x << std::endl; //Prints the most local, among the other global variable with same name.
    std::cout<< ::x << std::endl; //Accessing global x using :: .

    //Defining a scope inside main() scope:
    {
        int x = 5;
        std::cout<< x << std::endl; //It will print 5, as most local is accessed.
        std::cout<< ::x << std::endl; //It will print 2, no special way to access x = 21.
    }
    func();

    return 0;
}

//Topic: 2
/*Memory Layout of a Program:
we are writing a file: Miscellaneous_concepts.cpp, which is converted firstly into ASSEMBLY CODE FILE by Compiler and then to ".exe" file, which runs when we run a program (means the executable file), which takes space in RAM, and is loaded by OS (Kernel) inside the memory. And it has a specific layout inside the memory: (Suppose size of exe is 256kb.)
So, its addressing starts from 0kb to 256kb, Lower Address to Higher Address / Top to Botttom, Starting from the bottom most:

1. Code Segment: Or Text file, which contains the instructions to be executed in text form. It takes a few kbs.

2. Initialised Data: This is just READ from our exe file as it(Global and Static variables) is already initialized by the programmer containing all the programmer initialized lobal and Static variables.

3. BSS: Block Started by Symbols, this contains all initialized variables, whose value is not defined yet but are initialized only like int a; and they are given value = 0. 

4. Heap: Dynamic memory, given by new or malloc functions.

5. Stack: It contains the current CONETXT of our program at runtime. 

6. cmd Arguements: Contains cmd commands, highest level in layout.

*/