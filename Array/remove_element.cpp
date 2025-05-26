#include <iostream>
using namespace std;

int RemoveElement(int nums[], int size, int val){
    int k=0;

    for(int i=0; i<size; ++i){
        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    int nums[] = {3,2,5,2,3,5,8};
    int size = sizeof(nums)/sizeof(int);
    int val = 5;

    cout<<RemoveElement(nums, size, val)<<" ";

    return 0;
}