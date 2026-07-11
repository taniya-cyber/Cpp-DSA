#include<iostream>
#include<list>
//Linked List: Collenction of nodes; Doubly LL

int main(){

    //Creation
    std::list<int> myList;

    //Insertion: 
    //1. Push_back: Means from rightmost side:
    myList.push_back(12);
    myList.push_back(45);
    //2. Push_front: Leftmost:
    myList.push_front(4); //From Left side, before 12
    myList.push_front(88);//From Left side, before 4
    //LL: 88 -> 4 -> 12 -> 45

    //Removal:
    //1. Pop_back: From rightmost
    myList.pop_back();
    //LL: 88 -> 4 -> 12 
    //2. Pop_front: From leftmost
    myList.pop_front();
    //LL:4 -> 12 

    //Front and Back:
    // std:: cout<< myList.front() << std::endl; //4 First ele
    // std:: cout<< myList.back() << std::endl; //12 Last Ele


    // std:: cout<< myList.size() << std::endl;
    // myList.clear(); //Destroys all elements; resulting size = 0.
    // std:: cout<< myList.size() << std::endl;

    // //using empty function to see the result:
    // if(myList.empty() == true){
    // std:: cout<< "List is Khaali" << std::endl;
    // }
    // else{
    //     std:: cout<< "Scam Hogya Bhai Ji, clear ne list khali nhi kri" << std::endl;
    // }

    //begin() and end() return the beginning iterator and last when LL ends that iterator respectively. 
    //Traversing through Iterator:
    std::list<int>:: iterator it = myList.begin();

    std::cout << "Iterating the list using iterator, begin and end" << std::endl;

    while(it != myList.end()){
        std::cout<< *it << " ";
        it++;
    }






    return 0;
}