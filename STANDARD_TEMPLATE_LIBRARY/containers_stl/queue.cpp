#include<iostream>
#include<queue>
//Queue: It is a Data Structure using First - In, First - Out
int main(){
//Creation:
std::queue<int> q;

//Insertion: From the Rear-end
q.push(10);
q.push(20);
q.push(30);
q.push(40);

std::cout<< q.size() <<std::endl;

//We don't have clear() function in queue.

//Removal:
q.pop(); //From the Front-end
std::cout<< q.size() <<std::endl;

//We have empty() function too to see if the queue is empty or not.

// std::queue<int> q1 = {10, 399, 394, 90}; <-- Not allowed in queue
std::queue<int> q1; 
q1.push(100);
q1.push(20);
q1.push(120);
q1.push(3400);


q.swap(q1);

//Seeing the front and back of q1
std::cout << "1st ele in q: " << q.front() << "Last ele in q:  " << q.back();


    return 0;
}