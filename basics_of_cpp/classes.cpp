#include<iostream>

//Creating a class:
// class Students{
// //empty class: takes one byte.
// };

// class Student{
// public:
// //Properties or Data Members:
// int age;
// int height;
// int weight;
// std::string name;

// //Behaviour or Member Functions:
// void running(){
//     std::cout<< "I am Running" << std::endl;
// }
// void studying(){
//     std::cout<< name<< " is studying" << std::endl;
// }

// };
// class MainHuClass{
//     public:
// MainHuClass() {
//     //I am constructor
//     std::cout<< "I am printed whenever an obj is made" <<std::endl;
// }
// ~MainHuClass(){
//     std::cout<< "I am inside Destructor." <<std::endl;
// }


// };

int main(){
    /*Classes -> User-defined datatype: Your own datatype, eg. for storing 3 kind of values, like char, int bool inside one box -> custom datatype. Class is a powerful utility to create your own data type. Its duty is to make a BLUEPRINT, but we have to make/define actual things/reality/actual data, so, we have to convert this class into something real world thing -> OBJECT. 
    Suppose we have a class, called STUDENTS, and Student will have a height, weight, age and these all are known as Attributes or Properties and are called DATA MEMBERS. And student will have a behaviour too like Running, Walking, Studying, etc. This is called MEMBER FUNCTIONS. */  //std::cout<< sizeof(Student);

    //Creating an Object: Two ways
    //Static way
    // Student s1; //like we write int a, similarly, Student s1
    // //Accessing:
    // s1.age = 40;
    // s1.height = 212;
    // s1.name = "kabbar";
    // s1.weight = 47;
    // s1.running();
    // //Dynamic way
    // Student *s = new Student(); //this is inconsistent, so, we use new Student()
    // //Accessing dynamically created obj:
    // (*s).age = 91;
    // (*s).name = "Blaiblooo";
    // //another way of accessing, instead of (*s):
    // s->studying();

    //Constructor: It is a function whose work is to initialize data members ehile object creation. Whenever obj is made, directly, call goes to constructor. We don't need to specify datatype.
// MainHuClass a;
// MainHuClass *b = new MainHuClass;
// MainHuClass *c = new MainHuClass();

    // //Destructor is called while deleting,, and constructor while creation.
// delete(b);
// delete(c);
    return 0;
}