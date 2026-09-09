#include<iostream>

int sumofEle(int arr[], int sz){
    int sum = 0;
    for(int i = 0; i < sz; i++){
        sum += arr[i];
    }
    return sum;
}
int proofEle(int arr[], int sz){
    int pro = 1;
    for(int i = 0; i < sz; i++){
        pro *= arr[i];
    }
    return pro;
}
int main(){
    int sz = 4;
    int arr[] = {1, 2, 3, 5};
    std::cout<< "Product: " << proofEle(arr, sz)  << "Sum: "<< sumofEle(arr, sz);
    return 0;
}