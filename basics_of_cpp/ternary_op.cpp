#include<iostream>
int main(){
int age;
std::cout<< "Enter age: "<< std::endl;

std::cin>> age;

//with the help of If-Else: 
// if(age>21)
// {
//     std::cout<< "Can Marry at age " <<age;
// }
// else
// {
//     std::cout<< "Can't Marry as age is" <<age;
// }

//Now with Ternary Operator: Syntax: expression ? what to do when expression is true : what to do when expression is false; 
(age > 21) ? std::cout<< "Can Marry at age " <<age :  std::cout<< "Can't Marry as age is " <<age;
    return 0;
}
