#include<iostream>
int main() {
//Do - While: It DOES whatever written in loop one time without checking the condition. And SEMICOLN is important to put after the condition. Initialization is done outside.
// int i = 0;
// do
// {
//    //Logic
//    std::cout << i << " ";
//    //Updation
//    i++;
// } while (i <= 5);

//Empty Body
// for(int i = 1; i <= 5; i++); //EMPTY LOOP BODY
// {
// std::cout << i << " "; //i is acting as undefined as for loop does not exist for it.
// }


//Nested Loops:
for (int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 3; j++){
        std::cout << "i: " << i << ", j: " << j << std::endl;
    }
}
    return 0;
}