#include<iostream>

int deciToBinary(int decinum){
    int ans = 0;
    int pow = 1;
    while(decinum != 0){
        int rem = decinum % 2;
        decinum = decinum / 2;
        
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main(){
    std::cout<< deciToBinary(50);

    return 0;
}