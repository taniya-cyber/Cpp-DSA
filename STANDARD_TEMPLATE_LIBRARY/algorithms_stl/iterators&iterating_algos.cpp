#include <iostream>
#include <algorithm>
#include <vector>
// Algorithms in STL: In STL, it includes a wide range of algorithms that operate on various containers (vectors, lists, sets and maps) and provide essential functionality for data manipulation. Tjese are defined in <algorithms> header and are part of STL's core functionality.

// void PrintDouble(int e){
//     std::cout << 2*e << std::endl;
// }

int main()
{
    std::vector<int> arr(4);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    // 1. std::for_each(beginning, end, function_call): This algorithm is used when you nee to apply a specific function to a specific range, eg.:
    
    //using for_each:
    // std::for_each(arr.begin(), arr.end(), PrintDouble);

    //2. std::find(beginning, end, value to be found): Returns Iterator:
    //firstly making pointer:
    //std::vector<int>::iterator it = std::find(arr.begin(), arr.end(), 4); another way of writing this: using auto keyword:
    auto it = std::find(arr.begin(), arr.end(), 4);
    std::cout << *it<< std::endl;
    return 0;
}