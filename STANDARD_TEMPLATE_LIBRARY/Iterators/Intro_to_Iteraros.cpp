#include <iostream>
#include <vector>
// Iterator: Is a pointer - like object representing an element's specific position in a container(can be vector, list, queue, etc.) and its used to iterate over elements in container, and we had pointers then still we made Iterators because its a standardized way for all containers to traverse on. Eg. container_name.begin(), container_name.end() and container_name.begin() + i takes you to ith index.

int main()
{
    // Iterating on a vector:
    std::vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);

    std::vector<int>:: iterator IT;
    for(IT = v.begin(); IT != v.end(); IT++){
        std::cout<< *IT <<" ";
    }

    //Iterating operations:
    //1. *itr = Returns the element at current position
    //2. itr++ OR ++itr OR itr + 1 = Moves the iterator +1 from current position
    //3. itr-- OR --itr OR itr - 1 = Moves the iterator -1 from current position or we can say towards previous position
    //4. itr + i = moving iterator i positions ahead
    //5. itr1 == itr2 means we are comparing them; if they are pointing same position, then true is returned
    //6. itr1 != itr2 means we are comparing them; if they are pointing DIFFERENT position, then true is returned
    //7. itr = itr1 = assigns/copies position by itr1 to itr iterator.
    //8. itr->m = returns the member value m of object pointed by the iterator and is equivalent to (*itr).m, *itr represents A PAIR (pair<int, int>) inside a MAP, and pair has two types of values: pair.first(block 1), which can be accessed by (*itr).first or  itr->first and similalry for second. 
    

    
    return 0;
}