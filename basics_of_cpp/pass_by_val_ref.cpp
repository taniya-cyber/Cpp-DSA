#include<iostream>
/*A function has uts own space and suppose in int main function, we have a variable "a", which can't be accessed outside int main function as it is a local variable.*/

//for pass by value in int
//void solve (int a){
//This is PASS BY value as we are passing A COPY of original value, not the address. And this int a is a different block of memory, having its unique address containing the a = 5 value. And it belongs to solve function.
// std::cout << "2nd call: Inside function, before function does the main job: " << a <<std::endl;
// a++;
// std::cout << "3rd call: Inside function, AFTER Incrementing: " << a << std::endl;
// }


//for pass by reference in int 
// void solve (int &a){
    //we can give it any name like arr/num but '&' is compulsory as when we call it, we pass "a", and it accesses "a" from its the exact memory location.
//This is PASS BY Refernce as we are NOT passing  COPY of original value, But the address. And this int &a is refering the same block of memory as of a in int main due to PASS BY REFERNCE, it accesses same block of memory.
// std::cout << "2nd call: Inside function, before function does the main job: " << a <<std::endl;
// a++;
// std::cout << "3rd call: Inside function, AFTER Incrementing: " << a << std::endl;
// }

void countEven(int ary[], int size, int &count){ 
    //int ary[] = int* ary[] -> means the pointer to Starting Address of Array.
for(int i = 0; i < size; i++){
    if(ary[i] % 2 == 0){
        count++;
    }
}

}

int main(){
//     //This int a =5 belongs to int main.
// int a = 5;
// std::cout << "1st call: OUTSIDE function, before function runs: " << a << std::endl;
// solve(a);
// std::cout << "4th call: Outside function, even After Function call, Original value remains unaffected: " << a << std::endl;

//Pass By Reference: For int 

// int a = 5;
// std::cout << "1st call: OUTSIDE function, before function runs: " << a << std::endl;
// solve(a);
// std::cout << "4th call: Outside function, Original value getting affected: " << a << std::endl;
//We can do same for char, str.

//An Array is always passed by "Pass By Refernce", not by value. The compiler converts int arr[] into int* arr[] which means ADDRESS of Actual array not the copy, because it would be hard to store copy of a large array. That is why the sizeof() inside the function gives answer for the size of POINTER not the actual array.
int arr[5] = {0, 2, 3, 4, 6};
//std::cout<< sizeof(arr)<< std::endl;

int count = 0;
countEven(arr, 5, count);
std::cout<< count<< std::endl; //It won't tell you exact even numbers as you passed count in pass by value, so, the changes in it were not sustained.
return 0;
}

