#include<iostream>
//Char Array is used to store characters under one variable and its termination is done by "\0" null character(has ASCII value = 0). And it takes space of one byte.
//Every character is linked to some ASCII vales(integer).

//Lower case to uuper: ch(the character) - 'a' + 'A'; And Upper to lower case: ch - 'A' + 'a';

int getLen(char arry[]){ 
    //here, size of array is not mentioned as execution will be terminated when /0 is found.
    int count = 0;
    int index = 0;
    while(arry[index]!='\0'){
count++;
index++;
    }
return count;
 //We can return index too, then also, its same.
   }

//     void concat_ab(char a[], char b[]){
//     int aInd = getLen(a);
//     int bInd = 0;

// while(b[bInd] != '\0'){
//     a[aInd] = b[bInd];
//     aInd++;
//     bInd++;
// }
// //adding Null char:
// a[aInd] = '\0';

//     }

// void copyArray (char actual[], char copy[]) {
//     //Two Pointer Approach because if we want to copy a certain part of actual string, we won't be able to do this using single pointer for index.
// int aind = 0;
// int bind = 0;
// while(actual[aind]!= '\0'){
// copy[bind] = actual[aind];
// aind++;
// bind++;
// }
// //Adding null at the end
// copy[bind] = '\0';
// }

bool comparison(char a[], char b[]){
int aindex = 0;
int bindex = 0;
int a_len = getLen(a);
while(aindex <= a_len ){
    if (a[aindex] != b[bindex]){
        return false;
    }
    else{
        aindex++;
        bindex++;
    }
}
return true;
}

int main(){

//Declaration:
//char ar[10];
//std::cout <<ar[2]; //will print garbage value

//Defining:
//char ar[6] = "tanHi"; //6 due to null char
// std::cout <<ar[2] << " " <<ar[6];

//Cout Behaviour:
// int arr[3] = {1, 2, 4};
// std::cout<< arr; //it will print Base Address in hexadecimal, NOT FOR CHAR ARRAY.
// std::cout<< std::endl;
// char brr[] = "hitaniya";
// std::cout<< brr; //It will print whole series of characters.
//we can print using loop too.

//Operations:
//1. Finding Length:
// char arr[] = "hitaniya";
// std::cout<< getLen(arr); //does not count "\0"

//2. Concatenation:
// char a[10] = "Hi";
// char b[8] = "_Taniya";
// concat_ab(a, b);

// std::cout<< a;
// std::cout<< a[10];

//3. Copy:
// char actual_ary[10] = "Arora";
// char copyAry[10];
// copyArray(actual_ary, copyAry);
// std::cout<< copyAry;

//4. Comparison: We take 2 arrays and we compare them one character at a time.
char arr[10] = "tani";
char brr[10] = "Tani";

std::cout<< comparison(arr, brr)<< std::endl;

/*We didn't need this code, as we have LIBRARY FUNCTIONS to perform these:
strcpy(destination, source) -> for copying 
strlen() -> for printing length 
strcmp() -> for comparison: Returns 0 when have arrays are equal.
strcat() -> for concatenating
*/
    return 0;
}