#include <iostream>
#include <algorithm>
#include <vector>
// Algorithms in STL: In STL, it includes a wide range of algorithms that operate on various containers (vectors, lists, sets and maps) and provide essential functionality for data manipulation. These are defined in <algorithms> header and are part of STL's core functionality. 

//In short, we have algorithms or operations like add, sub, finding max, etc. in format of Functions in C++.

// void PrintDouble(int e){
//     std::cout << 2*e << std::endl;
// }

bool checkEven(int a){
    return a%2 == 0;
}
int main()
{
    std::vector<int> arr(4);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    int target = 4;
    // 1. std::for_each(beginning, end, function_call): This algorithm is used when you need to apply a specific function to a specific range, eg.:
    
    //using for_each:
    //std::for_each(arr.begin(), arr.end(), PrintDouble);

    //2. std::find(beginning, end, value to be found): Returns an Iterator:
    //firstly making pointer:
    //std::vector<int>::iterator it = std::find(arr.begin(), arr.end(), 4); another way of writing this: using auto keyword: It replaces "std::vector<int>::iterator" and determines by itself about which kind of iterator it has to apply.
    auto it = std::find(arr.begin(), arr.end(), target); //We can also directly specify without making target.
    std::cout << *it<< std::endl; //If target does nit exist, "it" will point ZERO 0.

    //3. std::find_if : Searches for the first element that satisfies the given Predicate (condn). 
    //std::find_if(beginning, end, condition in form of function) -> Returns an Iterator of the value which follows the condition.
    auto it1 = std::find_if(arr.begin(), arr.end(), checkEven);
    std::cout<< *it1 << std::endl;
    
    return 0;
}