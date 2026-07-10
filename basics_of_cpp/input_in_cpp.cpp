#include<iostream>
using namespace std;
int main()
{
    //Declaration of Variable
    int age;
    cout << "Enter you age: " <<endl;

    //Taking input in age variable:cin means console input, ">>" means Extraction Operator, and "<<" is Insertion operator (Inserts into output stream)
    cin >> age;
    cout << "Your age is: " << age << endl;

    //Taking Bool Input; We cant't give it in true or false, it has to be in 1 or 0. 
    bool isGirl;
    cout << "Is baby a girl?" << endl;
    cin >> isGirl;
    cout << isGirl << "is the answer" << endl;

    //cin.ignore(): Used to discard unnecessary characters in the input buffer, especially useful when mixing input types (e.g., integers and strings). 
    //How its done: std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    //Getline() : Unlike cin, which terminates input at whitespace, getline() reads an entire line, capturing spaces within strings.
} 
