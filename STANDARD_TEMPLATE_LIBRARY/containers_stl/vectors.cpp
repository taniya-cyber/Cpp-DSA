#include<iostream>
#include<vector>

//Vectors: Dynamic Array

int main(){
//Creation: 
// std::vector<int> v;
// std::vector<int> distance(15, 10); 
// //This means vector<datatype> name_of_dynamic_array(size of it, if you want to initialize it with any value in all boxes)

// //begin() : Returns an iterator pointing towards first element of vectors. vector_name.begin() returns iterator and *(vector_name.begin()) returns value of it. 

// // std::cout << *(distance.begin()) << std::endl; //Prints 10.
// // std::cout << *(distance.end()) << std::endl; //Prints Something Random as distance.end() points to location just after the vector's last element.

// //Pushing and Poping elements:
// v.push_back(10);
// v.push_back(20);
// v.push_back(40);
// v.push_back(80);
// v.push_back(30);

// //Popping, done from end
// v.pop_back();
// //std::cout<< v.size() <<std::endl; //Gives no. of elements in vector

// std::cout<< v.front() <<std::endl;
// std::cout<< v.back() <<std::endl;

// std::vector<int> age;
// //std::vector<int> age(10); <- Assigning Initial size or pushing back elements -> age.push_back(9);
// age.push_back(9); //As we have a assigned value using push_back, now we can give by using square brackets too.
// // age[0] = 12;
// // age[1] = 23;
// age.push_back(27);
// age.push_back(37);
// age.push_back(237);
// age.push_back(123);

// std:: cout<< age[0] << std::endl; //It will give error if we comment that age.push_back thing, but if not, then we can modify it, update, etc. or we can use them after assigning initial size.
// std:: cout<< age.at(1) << std::endl; //works same as [].

//Capability: This means the blocks we are having:
// std:: cout<< age.capacity() << std::endl; //It prints 8, it was 4 before we inserted the last element, and turned 8 (doubled) when we added 5th element 

// std::cout<< age.size() <<std::endl; 

//Suppose we are creating new vector, and using reserve(no._of_blocks) and then these will be initial reserved blocks for a vector.

// std::vector<int> a;
// a.reserve(12);

//max_size() returns the maximum size a vector can occupy: It depends on our processor.
//std::cout<< a.max_size() <<std::endl;

// //inserting elements in a vector:
// a.push_back(0);
// a.push_back(1);
// a.push_back(2);
// a.push_back(3);

// std::cout<< "Size of vector before clear(): "<< a.size() <<std::endl;
// //clear() clears/removes all elements of vector, leaving size = 0
// a.clear();
// std::cout<< "Size of vector AFTER clear():  "<< a.size() <<std::endl;

//inserting element using insert(iterator_pos, value)
// a.insert(a.begin(), 29);
// std::cout<< a.at(0) << std::endl; //other elements are shifted.

//erase: two types: at specofic position for specific element, or for a range:
// a.erase(a.begin(), a.end()); //erases the whole vector a.

//Swapping two dynamic arrays:

// std::vector<int> fir = {12, 34, 98, 10};
// std::vector<int> sec = {13, 453, 1223, 44};

// //Swapping elements of fir and sec: 
// fir.swap(sec);

// //Prining all elements of fir and sec using for-each loop:
// std::cout<< "Printing fir:  "<< std::endl;
// for(int i : fir){
//     std::cout << i << " " <<std::endl;
// }
// //Now printing sec using itrator:
// std::vector<int> :: iterator it = sec.begin();
// std::cout<< "Printing sec:  "<< std::endl;
// while(it != sec.end()){
//     std::cout<< *it << " " << std::endl;
//     it++;
// }


    return 0;
}