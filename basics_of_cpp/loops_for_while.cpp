#include<iostream>
int main(){
    // for (;;) /*THis is Khatraaaa, Its an infinite loop, and in for loop, no conditionis mandatory as a loop can run without Initialization; Condition; Iteration */
    // {
    //     std::cout<< "I am ARORA";
    // }
// int i;
// std::cout<< "Enter value for i: ";

// std::cin>> i;
// if(i < 6){
// for (i ; i>= 0; i--)
// {
//     std::cout<< "HT" << std::endl;
// }
// }
// else{
//     std::cout<< "I am out of LOOP";
// }

//Table of 51
// for(int i = 1; i <= 10; i++){
//     int result;
//     result = 51 * i;
//     std::cout<< "51 * " << i << " is equal to: "<< result << std::endl;
// }

//Break And Continue in FOR Loop:
//1. Break: 

// for (int i = 1; i <= 10; i++)
// {
//     //if break placed here, 5 will not be printed.
//     std::cout<< i <<std::endl;
//     if (i==5){
//         break; //if its placed after the action, then it prints 5 and then comes out from the loop.
//     }
// }

//2. Continue: It skips an Iteration.

// for (int i = 0; i <= 10; i++)
// {
//     if (i==5){
//         continue; //skipped 5, and continued ahead
//     }
//     std::cout<< i <<std::endl;
// }

//While Loop: Here, Initialization is done outside the Loop/ before the loop begins, and condition is written on the while keyword brackets, and updation is done inside loop, where logic is written.
// int i = 10;
// while (i >= 0){ //Until the condition is true, it will execute whats inside it, the moment when condition becomes false, control is thrown out of the loop.
//     std::cout<< i<< " ";
//     i--;
// }

//Alphabets from 'h' to 't':
// char ch = 'h';
// while (ch <= 't'){
//     std::cout << ch << " ";
//     ch++;
// }


    return 0;
}