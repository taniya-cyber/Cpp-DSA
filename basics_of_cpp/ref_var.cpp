#include<iostream>

int main(){
int a = 2; //a dibba is being created for "a"
int &temp = a; //giving "a" another name = temp

//Same memory location just multiple names.
std:: cout << temp << std::endl;

temp = temp * 10 + 100;
a++;
a = a * 10;
std:: cout << temp << std::endl;
std:: cout << a << std::endl;



    return 0;
}