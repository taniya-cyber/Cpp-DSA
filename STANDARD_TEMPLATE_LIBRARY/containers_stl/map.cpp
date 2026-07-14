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

    //Size, Clear
    // std::cout<< table.size() <<std::endl;
    // table.clear();
    // std::cout<< table.size() <<std::endl; //Now size = 0

    // //Acessing:
    // std::cout<< table.at("in") <<std::endl; // at("Key_name") returns what is present in that key.
    // //Updating value using at:
    // table.at("in") = "India2";
    // std::cout<< table.at("in") <<std::endl;
    // //Updating using []:
    // table["in"] = "India3";
    // std::cout<< table.at("in") <<std::endl; //or can be done by: table["in"]

    // std::unordered_map<std::string, std::string>::iterator it = table.begin();
    // std::cout << "Traversing the Unordered Map: ";
    // while(it != table.end()){
    //     // std::cout << *it << " "; Here, our iterator is pointing that entry where key value pair is there. To print that K-V pair, we have to specify:
    //     std::pair<std::string, std::string> p = *it;
    //     std::cout << (*it).first << " " << (*it).second << std::endl; //Now this is pointing the first entry and increasing the "it" value afterwards, and firs is pointing the key, second is printing the value.
    //     it++;
    // }

    //Erase:
    // table.erase(table.begin(), table.end());

    //find(key): if found, iterator of that location will be returned. If not found, it goes to end iterator (means returns it).
    if (table.find("in")!= table.end()){
        std::cout << "FOUND..!!";
    }
    else{
        std::cout << "NAHI MILI..!!";
    }

   //Count() -> Returns the number of element specified by a key; therefore, can be 0 or 1 only, as key can't be duplicated, so, either a key exists, or it does not.
   if(table.count("in") == 0){
    std::cout << "Key doesn't exist";
   }
   if(table.count("in") == 1){
    std::cout << "Found";
   }


    return 0;
}