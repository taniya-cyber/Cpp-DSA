#include<iostream>
#include<vector>

//Vectors: Dynamic Array

int main(){
//Creation: 
std::vector<int> v;
std::vector<int> distance(15, 10); 
//This means vector<datatype> name_of_dynamic_array(size of it, if you want to initialize it with any value in all boxes)

//begin() : Returns an iterator pointing towards first element of vectors. vector_name.begin() returns iterator and *(vector_name.begin()) returns value of it. 

std::cout << *(distance.begin()) << std::endl; //Prints 10.
std::cout << *(distance.end()) << std::endl; //Prints Something Random as distance.end() points to location just after the vector's last element.



    return 0;
}