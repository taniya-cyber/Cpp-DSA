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
    arr[2] = 10;
    arr[3] = 4;
    int target = 4;
    // 1. std::for_each(beginning, end, function_call): This algorithm is used when you need to apply a specific function to a specific range, eg.:
    
    //using for_each:
    //std::for_each(arr.begin(), arr.end(), PrintDouble);

    //2. std::find(beginning, end, value to be found): Returns an Iterator:
    //firstly making pointer:
    //std::vector<int>::iterator it = std::find(arr.begin(), arr.end(), 4); another way of writing this: using auto keyword: It replaces "std::vector<int>::iterator" and determines by itself about which kind of iterator it has to apply.
    // auto it = std::find(arr.begin(), arr.end(), target); //We can also directly specify without making target.
    // std::cout << *it<< std::endl; //If target does nit exist, "it" will point ZERO 0.

    // //3. std::find_if : Searches for the first element that satisfies the given Predicate (condn). 
    // //std::find_if(beginning, end, condition in form of function) -> Returns an Iterator of the value which follows the condition.
    // auto it1 = std::find_if(arr.begin(), arr.end(), checkEven);
    // std::cout<< *it1 << std::endl;

    // //4. std::count(Range, target): Finds the number of Occurances. 
    // int ans = std::count(arr.begin(), arr.end(), 1);
    // std::cout << ans <<std::endl;

    // //5. std::count_if(Range, Function of condition): Returns the count of numbers satisfyig the condition. 
    // int ans1 = std::count_if(arr.begin(), arr.end(), checkEven);
    // std::cout<< ans1 <<std::endl;

    // //6. std::sort: Sorts in ascending order and returns the ordered sequence.
    // std::sort(arr.begin(), arr.end());
    // //Checking:
    // for(int a: arr){
    //     std::cout<< a <<std::endl;
    // }

    // //7. Reversing:
    // std::reverse(arr.begin(), arr.end());
    // std::cout<< "Reversed vector:  " <<std::endl;
    // //Checking:
    // for(int a: arr){
    //     std::cout<< a <<std::endl;
    // }

    //8. Rotate: Rotates element in a range: std::rotate(beginning of rotation from, How much from begnning we should move, end);
    std::rotate(arr.begin(), arr.begin() + 2, arr.end()); 
    //As we have(element(index)): 1(0) -> 2(1) -> 10(2) -> 4(3); After Rotation: 10 -> 4 -> 1 -> 2, index will be changed also. 
    for(int a: arr){
        std::cout<< a <<std::endl;
    }
    
    return 0;
}