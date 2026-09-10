#include<iostream>
int finding_intersect(int arr[], int brr[], int sz){
    for(int i = 0; i < sz; i++){
        if(arr[i] == brr[i]){
            std::cout << "Element: " << arr[i] << " , Index: " << i << std::endl;
        }
    }
}
int main(){
    int sz = 4;
    int arr[] = {1, 2, 4, 6};
    int brr[] = {9, 0, 4, 5};
    finding_intersect(arr, brr, sz);
    return 0;
}