#include<iostream>
#include<climits>
void min_max(int num[], int sz){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;
    for(int i = 0; i < sz; i++){

        if(num[i] < smallest){
            smallest = num[i];
            smallestIndex = i;
        }

        if(num[i] > largest){
            largest = num[i];
            largestIndex = i;
        }
        
    }
    std::swap(num[smallestIndex], num[largestIndex]);
    std::cout<<"Smallest: " << smallest << std::endl;
    std::cout<<"Largest: " <<  largest << std::endl;

    for(int i = 0; i < sz; i++){
        std::cout<< num[i] << std::endl;
    }
}
int main(){
    int sz = 5;
    int arr[sz] = {1, -2, -344, 30, 0};
    min_max(arr, sz);
    
    return 0;
}