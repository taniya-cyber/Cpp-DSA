#include<iostream>
#include<map>
#include<unordered_map>
// #include<ordered_map> does not exist.

/* ->Map: A data structure, Just a table (Entries); Collection of Key - Value pairs. 
   -> Allows Efficient Retrieval and Modifications of values based on their keys
   -> Keys are unique within the map.
   -> Eg. 1 (key) -> "Intro of Cpp." (value)
   -> in int arr[], we map int to int, means 0 -> some value, 1 -> some value.
   -> in string arr[], we map int to str, 0 -> some str, 1 -> some str, but we weren't having something for str -> str mappins, so, maps came.

   Types of Map:
   -> Ordered - Not in random order.
   -> Unordered - Based on Array DS/ Hash table, In random order
*/
int main(){ 
    //Creation of Unordered Map: std::type_of_map<type_of_key, type_of_value> name_of_map;
    std::unordered_map<std::string, std::string> table;

    //Insertion in Unordered map: two ways
    table.insert(std::make_pair("en", "England")); //"key", "value"
    table["in"] = "India"; 

    //3rd way:
    std::pair<std::string, std::string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    return 0;
}