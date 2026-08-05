#include<iostream>
#include<vector>
#include<algorithm>

int main(){

    std::vector<int> arr(5); 
    //For applying Binary search, vector should be monotonic means in Order.
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    int target = 40;
    std::binary_search(arr.begin(), arr.end(), target); //It returns BOOL value, if found, then 1, if not then 0. It doesn't Return an ITERATOR. 

    if(std::binary_search(arr.begin(), arr.end(), target) == 0){
        std::cout<< "NAHI EXIST KRTA";
    }
    else{
        std::cout<< target << " FOunD";
    }



    return 0;
}