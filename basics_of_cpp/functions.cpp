#include<iostream>
//Function is a way to group multiple lines of code into a single unit. It can take input, process them and gives a result. Not all functions return an output and not all take input. It helps in making code more readable, and easy to maintain.
//In short, its a place where the repeated task is written for one time, and is accessed again and again when needed. If we don't make function for repeated tasks then it makes our code bulky and buggy and hard to manage/maintain. 

//Function Anatomy: 
/*return_type (means in which datatype a function is returning), can be void or non-void.
return_type NameOfFunction (input parameters for function, optional field)
{
Body/Scope Of Function (The operation/s you want to perform)
}
*/
// int sum_of_two(int a, int b) {
//     int ans1 = a + b;
//     return ans1; //Its type is specified above, it is used as "int" above promised a value, but if we don't use return, then no value goes outside the function as ans1 is LOCAL VARIABLE.
// }
//ORDERING MATTERS A LOT IN CPP of Function's.
//function declaration means I declared that I will be making/defining a function in future but now just declararing: void printMyname(); (Putting Semicolon afterwards, and it won't give any error as I declarared function, Now I can use it in int main and define the logic/body after main function even.)

// void printMyname();
// int main(){
// int ans = sum_of_two(4, 5); //in "ans", we are storing the value for sum function called for 4 and 5 only.
// std::cout<< ans ;

// printMyname(); //Defining it after the main function is valid as it was declared above but if we don't declare, it will give error.
//     return 0;

// }

// void printMyname(){
//     std::cout<< "Hi_Ta";
//}