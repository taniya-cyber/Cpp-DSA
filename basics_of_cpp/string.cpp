#include<iostream>
/*Strings: It is a data type used to store characters, surrounded by double quotes, and in char array, the termination is handled by the \0, which is handled by us, but in string, its done by ITSELF.

Also, string is dynamic as it can increase size at runtime if needs to store more variables. Are safer then char.

Safer -> How?
As it doesn't manipulate operations/ methods directly in main memory, making operations safer and code readable.

Automatic memory management: std::string class manages necessary allocation and deallocation of memory, significantly reducing memory leaks risk.

No Null Termination: As it handles termination by itself, thus avoiding issues.

Bound Checking: Functions like std::string::at perform bound checking and throw exceptions if you try to access "OUT OF RANGE", reducing risk of memory corruption. 
*/
int main(){

//Declaration:
// std::string name;
// name.push_back('a');
// name.push_back('b');
// name.push_back('c');

// std::cout<< name << std::endl;
// std::cout<< name.length() << std::endl;

/*But this behaviour is not in the char array, as we have to add null char by ourselves, or it will print some randome chars.*/

//Initialization:
std::string surname = "arora";

//Updation:
surname = "sharma";

std::string s = "taniyaa";
std::cout<< s.substr(2, 3)  << std::endl;

std::cout<< surname.compare(s)  << std::endl; //returns -1 as not equal.
std::cout<< surname.compare(surname)  << std::endl; //retuns 0 as same.
std::cout<< surname.find(s)  << std::endl; //gives nopos value.

//Library Functions:
/*
1. s.length() -> s stands for the string whose length you want to find
2. s.append(t); -> s vali string ke sath we are concatenating t vali string (s + t), in s.
3. s.insert(pos,t) -> pos means position where you want to insert t in s.
4. s.substr(pos, len); -> This is used to get a specific substring from a string, eg. s = "taniyaa", and I want "niy" to be printed, so, s.substr(2, 3), and output will be "niy".
5. s.compare(t) -> returns o if equal, and -ve or something else if not equal.
6. s.find(typos); ->  it tries to find one string in other, returing index where it found, or returns std::nopos means no position. 


*/

    return 0;
}