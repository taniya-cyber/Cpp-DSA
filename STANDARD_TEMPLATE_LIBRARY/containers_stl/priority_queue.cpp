#include<iostream>
#include<queue>
//queue library for deque and priority queue.

//Priority queue: Adopter Class that provides a prioirty queue (Heap), elements are stored in such a way that the retrieval becomes efficient as high priority element can be retrieved when needed.

int main(){

    // //Creation:
    // std::priority_queue<int> pq;
    // //when we create priority queue, by default, max - heap is created inside the memory. and maximum - valued element gets the priority.

    // //Inserting elements:
    // pq.push(12);
    // //12
    // pq.push(123);
    // // 123 -> 12
    // pq.push(8);
    // // 123 -> 12 -> 8 are rearranged.

    // //top() is a function accessing the highest priority value inside priority queue.
    // std::cout<< pq.top() << std::endl;

    // //Removal:
    // pq.pop(); //Highest priority element is removed or we can say element at the top.

    // //It also does not have clear()

    // //we can check if its empty by: if(pq.empty() == true) {.....}

//     //Creation of Min - Heap:
//     std::priority_queue<int, std::vector<int>, std::greater<int> > pqm;
//    //<type_of_queue, type_of_container, greater_int>
//     pqm.push(10);
//     //10
//     pqm.push(230);
//     //10 -> 230
//     pqm.push(87);
//     //10 -> 87 -> 230
    
//     std::cout<< "Top of Min - heap queue:  " << pqm.top() << std::endl;
//     pqm.pop(); //removes top; 100.

    return 0;
}