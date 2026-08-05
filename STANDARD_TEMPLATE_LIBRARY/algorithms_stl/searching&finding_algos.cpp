#include<iostream>
#include<vector>
#include<algorithm>

int main(){

    std::vector<int> arr; 
    //1. For applying Binary search, vector should be monotonic means in Order.
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    // int target = 40;
    // std::binary_search(arr.begin(), arr.end(), target); //It returns BOOL value, if found, then 1, if not then 0. It doesn't Return an ITERATOR. 

    // if(std::binary_search(arr.begin(), arr.end(), target) == 0){
    //     std::cout<< "NAHI EXIST KRTA";
    // }
    // else{
    //     std::cout<< target << " FOunD";
    // }

    // //2. std::lower_bound = Finds the first element greater or equal to a value in sorted range means:
    // auto IT1 = std::lower_bound(arr.begin(), arr.end(), 24); //As 24 is not in arr vector, so it will return Iterator for the greater value than or we can say just after 24, eg. 30.
    // std::cout<< *IT1 << std::endl;

    // //3. std::upper_bound: Finds the first element greater NOT equal to a value in sorted range means:
    // auto IT2 = std::upper_bound(arr.begin(), arr.end(), 30); //It only prints value greater than we gave.
    // std::cout<< *IT2 << std::endl;

    // //4. std::equal_range = Finds a range of elements equal to a value in a sorted range.
    // auto p = std::equal_range(arr.begin(), arr.end(), 30);
    // std::cout << *(p.first) << std::endl;
    // std::cout << *(p.second) << std::endl;
    return 0;
}