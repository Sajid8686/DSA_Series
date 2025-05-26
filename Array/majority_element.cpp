#include <iostream>
using namespace std;

int main() {
    int nums[] = {1,2,3,2,2,2,4,5,4,3,1};
    int size = sizeof(nums)/sizeof(int);

    int count=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
    }

    cout<<"Number of elements: "<<count<<endl;
    return 0;
}