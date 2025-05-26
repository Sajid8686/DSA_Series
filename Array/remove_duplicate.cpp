#include <iostream>
using namespace std;

int RemoveDuplicate(int nums[], int size){
    int x=0;

    for(int i=0; i<size; i++){
        if(nums[i] != nums[x]){
            x = x+1;
            nums[x] = nums[i];
        }
    }

    return x+1;
}

int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int size = sizeof(nums)/sizeof(int);

    cout<<"New array is: "<<RemoveDuplicate(nums, size)<<endl;
    for(int x=0; x<size; x++){
        cout<<nums[x]<<" ";
    }
    return 0;
}