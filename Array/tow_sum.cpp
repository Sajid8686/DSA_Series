#include <iostream>
using namespace std;
bool twosum (int arr[],int t, int n){
    for(int i = 0 ; i< n; ++i){
        for(int j = i+1; j< n; ++j){
            if(arr[i] + arr[j] == t) return true;
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3};
    int target = 4;
    int n = sizeof(nums) / sizeof(nums[0]);
    cout<< twosum(nums, target, n);


    return 0;
}