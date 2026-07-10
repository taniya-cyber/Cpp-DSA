#include<iostream>

void printArray(int array[], int size){
    for(int ind = 0; ind<= size - 1; ind++){
        std::cout<< array[ind]<< std::endl;
    }
}

// void flipOneZeros(int array[], int size){
//     for (int index = 0; index < size; index++){
//         if (array[index] == 1) {
//         array[index] = 0;
//         }
//         else {
//             array[index] = 1;
//         }
//     }
// }
int main(){
//Arrays are used to declare multiple values in a single variable, instead of declaraing separate variables for each. Syntax: (datatype) int (nameOfArray) numbers[(size of array)];

//declaration
// int arr[11];
//int arr[]; We have to specify size of array, if not done, it gives error.

//Definition or Initialization:
// int ab[3] = {1, 2}; //Third Place contains Garbage Value.
// int crr[] = {1,2 , 4, 5, 5}; //This is also possible.

//Array takes CONTINUOUS place in Memory.

// int arr[5];

// for (int index = 0; index<=4; index++){
// std::cout<< "Enter value for index " << index << " : ";
// std::cin>> arr[index];
// std::cout<< std::endl;
// }

// //Traversing array:
// for(int index = 0; index<=4; index++){
//     std::cout<< arr[index] << std::endl;
// }

//Printing Sum of All Indices:

// int arr[] = {2, 4, 5};
// int sum = 0;
// for (int i = 0; i < 3; i++){
// sum = sum + arr[i];
// }
// std::cout<< "Sum of all is: " << sum;

//Passing an array to a Function: Important Point is that The array and its size, both has to be sent together means as parameters. Eg: void printArray (int arr[], int size){body of func.}, and after calling, we have to pass both of these values. 

// int arr[] = {2,3,4};
// printArray(arr, 3);

//Zero based Initialization:
// int arr[4] = {0};
// printArray(arr, 4); //All values will be zero here.

//If I initialize one value for an index & all others will get 0 in it, not garbage values.But if I don't initialize any value, then there will be garbage value.

// int arr[4];
// printArray(arr, 4); //will have all garbage values.

//Fliping 1s & 0s in array.

// int ay[] = {0, 0, 1};
// std::cout<< "Before: "<< std::endl;
// printArray(ay, 3);
// std:: cout << std::endl;


// std::cout<< "After: " << std::endl;
// flipOneZeros(ay, 3);
// printArray(ay, 3);
    return 0;
}