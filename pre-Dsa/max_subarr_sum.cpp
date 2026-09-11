#include<iostream>
#include<climits>
int main(){
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    //Max Subarray Sum:
    int maxSum = INT_MIN;
    for(int start = 0; start < n; start ++){
        int current_sum = 0;
        for(int end = start; end < n; end++){
            current_sum += arr[end];
            maxSum = std::max(current_sum, maxSum);
        }
    }
    std::cout << "Max SubArray Sum: " << maxSum;
    //Min Subarray Sum:
    int minSum = INT_MAX;
    for(int start = 0; start < n; start ++){
        int current_sub = 0;
        for(int end = start; end < n; end++){
            current_sub += arr[end];
            minSum = std::min(current_sub, minSum);
        }
    }
    std::cout << "Min SubArray Sum: " << minSum;
    return 0;
}