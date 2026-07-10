#include<iostream>
int main(){
//For comparing 2 values, we use == operator.

//Syntax of Switch: switch(expression means thing to be compared, eg. grade.) Then Case 1, 2, 3.....then default Case.

//Doing with If Else If:
// char grade;
// std::cout<< "Enter your grades: ";
// std::cin>>grade;
// if(grade == 'A')
// {
//     std::cout<<"Your marks lie in 90-100";
// }
// else if(grade == 'B')
// {
//     std::cout<<"Your marks lie in 90-80";
// }
// else if(grade == 'C')
// {
//     std::cout<<"Your marks lie in 80-70";
// }
// else if(grade == 'D')
// {
//     std::cout<<"Your marks lie in 70-60";
// }
// else
// {
//     std::cout<<"Your marks lie in 0-60";
// }

//Doing By Switch Statement: (More readable and easy to unerstand)
// switch(grade){
//     //It will print all cases IF WE DO NOT use BREAK keyword after every case, means no other statement will be executed if we use BREAK, and jumps to another only when needed.
//     case 'A': std::cout<<"Your marks lie in 90-100" <<std::endl;
//     break;
//     case 'B': std::cout<<"Your marks lie in 90-80" <<std::endl;
//     break;
//     case 'C': std::cout<<"Your marks lie in 80-70" <<std::endl;
//     break;
//     case 'D': std::cout<<"Your marks lie in 70-60" <<std::endl;
//     break;
//     default:  std::cout<<"Your marks lie in 0-60" <<std::endl;
// }
//Another Important things in Switch - Case:
/* 1. Expression Type: It can't be in Float or String form.                                    2. Unique case Values: means We can't have case 'A' and case'A' twice.
3. No Range Checking: In the case part, we can't put like this case(age>20) but in swtich expression, its allowed: switch(age>18), as its ans in true or false only.
4. Fall Through Behaviour: We have to put the keyword BREAK, if we don't, it won't stop execution even after getting the answer.
5. Execution Order: From the case written firstly till the last, and default case is not mandatory. */                                  
return 0;
}
