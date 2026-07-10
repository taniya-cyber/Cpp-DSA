#include<iostream>
int main(){
//Unary Operator: post and pre increment or decrement:
// int a = 4;
// std::cout << (++a) << std::endl; //op: 5
// std::cout << (a++) << std::endl; //op: 5 but a is now 6
// std::cout << a << std::endl; //a is 6

//Next we have Arithmetic Operator and % is resource consuming operator, and, when we use / division, the answer's datatype is based on numerator's datatype.
//Relational Operators give answer in True or False only. (Output in 0 or 1)

//Logical Operators: When you have multiple conditions.
// bool con1 = true;
// bool con2 = false;
// bool con3 = true;
// if(con1 && con2 && con3){ //Logical AND
//     std::cout<< "All condns need to be true";
// }
// else{
//     std::cout<< "If 1 is false, it will be executed";
// }

// bool con1 = true;
// bool con2 = false;
// bool con3 = true;
// if(con1 || con2 || con3){ //Logical OR
//     std::cout<< "Atleast 1 is true";
// }
// else{
//     std::cout<< "All are false";
// }

//Bitwise Operator:
//Bitwise AND (&): Performs AND operation on Bit Level
std::cout << (5&4) <<std::endl; //ans: 4
//Bitwise OR (|): Performs OR operation on Bit Level
std::cout << (5|4) <<std::endl; //ans: 5
//Tilda (~): Flips the Bits
std::cout << (~1) <<std::endl;
//Left Shift: eg. 5 << 1 (5 ki bits mei 1 bit means starting mei zero is shifted and at the end, 1 is added in the binary representation.) Means in left shift, its simply getting multiplied by 2. And (5<<1) means 5 ko ek bar 2 se multiply krA.
std::cout << (5<<1) <<std::endl;
//Right Shift: eg. 1 >> 1 means the rightmost bit is getting removed and others getting shifted. So, 1 is divided by 2, therefore, gives us zero.
std::cout << (100>>2) <<std::endl; //ans is 25
//Xor or Exclusive OR (^): 0, 0 is 0 and 1, 1 also 0.
    return 0;
}