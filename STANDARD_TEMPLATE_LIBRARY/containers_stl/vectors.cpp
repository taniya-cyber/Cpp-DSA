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

std::vector<int> age;
//std::vector<int> age(10); <- Assigning Initial size or pushing back elements -> age.push_back(9);
age.push_back(9); //As we have a assigned value using push_back, now we can give by using square brackets too.
age[0] = 12;
std:: cout<< age[0] << std::endl; //It will give error if we comment that age.push_back thing, but if not, then we can modify it, update, etc. or we can use them after assigning initial size.
    return 0;
}