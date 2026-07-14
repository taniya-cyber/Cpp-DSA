#include<iostream>
#include<set>

//Set: is a container for storing data but it stores unique values only, doesn't allow duplicate values.   Elements are stored in sorted way, duplicates are automatically removed. Provides efficient Insertion, Removal and Search Operations.
//Types: Unordered O(1), Ordered Set O(log n). 

int main(){
    //Creation
    std::set<int> set;

    //Insertion:
    set.insert(9);
    set.insert(10);
    set.insert(0);
    set.insert(123);

    //Size
    // std::cout << set.size() << std::endl;
    //We have clear() also.
    
    //Traversing: Gives us sorted set, if we change set to unordered_set, then it won't be sorted.
    // std::set<int>::iterator IT = set.begin();
    // while(IT != set.end()){
    //     std::cout << *IT << " ";
    //     IT++;
    // }

    // std::cout << set.erase(3); //Removes the element WHICH WE INSERTED AT 3rd PLACE.

    //find(""): returns iterator to the give element, if it exists, and reaches to end() if it doesn't.

    if(set.find(15) != set.end()){
        std::cout << "Found..!";
    }
    else{
      std::cout << "Sorry, Not Found..!";  
    }

    std::cout<< std::endl;

    //count(element): tells the count of element, how many times it is present, as set doesn't allow duplicacies, so, returns 0 if not exist, and 1 if it does.
    if(set.count(9) == 0){
        std::cout << "Can't Found..!";
    }
    if(set.count(9) == 1){
        std::cout << "Found..!";
    }


    return 0;
}