#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>


int main(){

    std::vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 44;
    arr[4] = 22;
    int sum = 0; //If I change value of sum, eg. 100, then it will be added to sum of elements of Vectors.
    //1. std::accumulate : computes the sum of elements in range: (range, initial_value_of_sum)
    int totalsum = std::accumulate(arr.begin(), arr.end(), sum);
    std::cout << totalsum << std::endl;

    //2. Inner Product: std::inner_product(range of vector 1, begnning of vector 2(no need to add ending of vector 2, as product depends on range of 1), 0 (Initial vALUE, IF Its 100, 100 will be added to our totalSum after multiplication.)) -> suppose first = {1,2,3}, second = {3,4,5} , Inner product : 1*3, 2*4, 3*5 -> 3 + 8 + 15 -> 26 (Initial value was 0, so Nothing extra was added.)

    std::vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    std::vector<int> b;
    b.push_back(3);
    b.push_back(4);
    b.push_back(5);

    int inner_product = std::inner_product(a.begin(), a.end(), b.begin(), 0); //Zero is initial value of the sum
    std::cout << inner_product << std::endl;

    //3. std::partial_sum = This calculates the sum partially, Like firstly from the starting element to the starting one then to the 1st to 2nd one then 1, 2, and 3rd one and so on.
    
    std::vector<int> result(b.size()); 
    std::partial_sum(b.begin(), b.end(), result.begin());
    //it returns answer in form of output as in vector or any container of our choice form. So, we write result.begin() there to add elements in it. 


    //4. std::iota = Fills a range with incrementing values.
    std::vector<int> one(5);
    std::iota(one.begin(), one.end(), 250); //250 is the initial value. 
    for(int a: one){
        std::cout<< a << " ";
    }    
    return 0;
}