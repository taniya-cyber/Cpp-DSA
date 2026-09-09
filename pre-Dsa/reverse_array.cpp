#include<iostream>

//Using 2 pointer Approach
void reverseArray(int arr[], int sz){
    int start = 0;
    int end = sz - 1;
    while (start < end){
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int sz = 5;
    int arr[sz] = {12, 45, 4, 5, 6};
    reverseArray(arr, sz);
    
    for(int i = 0; i < sz; i++){
    std::cout<< arr[i] << std::endl;
    }

    return 0;
}