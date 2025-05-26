#include <iostream>
// #include <vector>
using namespace std;

int moveZero(int nums[], int size){

    int left = 0;

    for(int right=0; right<size; right++){
        if(nums[right] == 0){
            continue;
        }
        else{
            swap(nums[right], nums[left]);
            left++;
        }
    }

    return -1;
}

int main() {
    int nums[] = {0,1,6,9,0,0,0,3,12,0};
    int size = sizeof(nums)/sizeof(int);

    moveZero(nums, size);
    for(int i =0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
} 