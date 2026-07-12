#include<iostream>
#include<queue>

//Deque: Doubly - ended queue, means it has both Front and Rear and on Front and Rear both, Push and pop can be done. Its similar to vectors but we can do insertion and removal on both ends efficiently. And this is suitable when we need to make frequent insertion or removal from both ends.

//Its header file is QUEUE.

int main(){

  //Creation:
  std::deque<int> dq;

  //Insertion:
  dq.push_back(0);
  dq.push_back(1);
  dq.push_back(3);
  //0 -> 1 -> 3
  dq.push_front(2);
  dq.push_front(4);
  dq.push_front(9);
  //9 -> 4 -> 2 -> 0 -> 1 -> 3

  dq.insert(dq.begin(), 9);

  //Removal:
  dq.pop_back();
  //9 -> 4 -> 2 -> 0 -> 1
  dq.pop_front();
  //4 -> 2 -> 0 -> 1

  // //Printing size of deque:
  // std::cout << dq.size() << std::endl;

  // //Accessing first and last element:
  // std::cout << "dq.front(): " << dq.front() << std::endl;
  // std::cout << "dq.back(): " << dq.back() << std::endl;

  //We can check if its empty by empty() function

  // //Iterating using An Iterator, begin() and end().
  // std::deque<int>:: iterator it = dq.begin();
  // std::cout << "Iterating to Deque dq using Iterator: ";
  // while(it != dq.end()){
  //   std::cout << *it << " ";
  //   it++;
  // }
  // std::cout << std::endl;

  // //Accessing ELEMENTS using: operator [] or by at():
  // std::cout << "dq[0]:  " << dq[0] <<std::endl; //4
  // std::cout << "dq.at(2):  " << dq.at(2) <<std::endl; //0
  

  //Similarly, we have erase, clear and swap functions work same as in vectors.
  
return 0;
}
