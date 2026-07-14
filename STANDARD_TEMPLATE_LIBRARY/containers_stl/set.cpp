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
    std::cout << set.size() << std::endl;
    //We have clear() also.
    
    //Traversing: Gives us sorted set, if we change set to unordered_set, then it won't be sorted.
    std::set<int>::iterator IT = set.begin();
    while(IT != set.end()){
        std::cout << *IT << " ";
        IT++;
    }

    std::cout << set.erase(3); //Removes the element WHICH WE INSERTED AT 3rd PLACE.

    return 0;
}