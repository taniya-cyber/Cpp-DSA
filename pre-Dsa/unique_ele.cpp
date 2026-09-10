#include<iostream>
int unique_only(int arr[], int sz){
    for(int i = 0; i < sz; i++){
        bool seen_before = false;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                seen_before = true;
                break;
            }
        }
        if(!seen_before){
            std::cout<< arr[i] << " ";
        }
    }
}
int main(){
    int arr[] = {1, 2, 1, 2, 1, 1, 2, 3, 4, 4, 5};
     int sz = sizeof(arr)/sizeof(int);
     unique_only(arr, sz);
    return 0;
}