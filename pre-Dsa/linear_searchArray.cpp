#include<iostream>

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i; //Index of that element
        }
    }
    return -1;
}

   

int main(){
    int size = 4;
    int arr[size] = {1, 200, 34, 49};
    int target = 34;

    std::cout<< linearSearch(arr, size, target);
   

    return 0;
}