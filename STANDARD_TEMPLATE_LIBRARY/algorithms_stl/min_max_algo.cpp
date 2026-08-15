#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    // //1. std::min = Returns the smaller of 2 values
    // int a = 22;
    // int b = 12;
    // std::cout<< std::min(a, b)<< std::endl;
    // std::cout<< std::max(a, b)<< std::endl;

    //2. std::min_element: Finds smallest in a range: and std::max_element is opposite
    std::vector<int> arr;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(45);
    arr.push_back(-34);
    auto IT = std::min_element(arr.begin(), arr.end());
    std::cout<< *IT << std::endl;

    auto IT1 = std::max_element(arr.begin(), arr.end());
    std::cout<< *IT1 << std::endl;

    
    
    return 0; 
}