#include <iostream>
#include <algorithm>
#include <vector>
// Algorithms in STL: In STL, it includes a wide range of algorithms that operate on various containers (vectors, lists, sets and maps) and provide essential functionality for data manipulation. Tjese are defined in <algorithms> header and are part of STL's core functionality.

void PrintDouble(int e){
    std::cout << 2*e << std::endl;
}

int main()
{

    // 1. std::for_each: This algorithm is used when you nee to apply a specific function to a specific range, eg.:
    std::vector<int> arr(4);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    
    //using for_each:
    std::for_each(arr.begin(), arr.end(), PrintDouble);
    
    return 0;
}