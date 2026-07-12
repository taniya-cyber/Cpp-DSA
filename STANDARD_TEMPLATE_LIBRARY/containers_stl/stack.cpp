#include<iostream>
#include<stack>

//Stack: 

int main(){

  //Creation:
  std::stack<int> st;
  
  //Insertion:
  st.push(11);
  st.push(14);
  st.push(89);
  //89 (TOS) -> 14 -> 11

  //Removal: Pops the Top firstly.
  st.pop();
 
  //Size after popping: //2
  std::cout << st.size() << std::endl;

  //Viewing the Top of the stack:
  std::cout << st.top() << std::endl; //14
  
  //We can check if stack is empty by empty() == true {...}
  //We can swap also from swap() function.

    return 0;
}