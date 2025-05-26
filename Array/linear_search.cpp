
#include <iostream>
using namespace std;

int LinearSearchTarget(int nums[], int target, int size){
    for(int i=0; i<size; i++){
        if(nums[i] == target){
            return i;
        }
    }

    return -1;
}

int main() {
    int nums[] = {2,5,8,4,15,39};
    int size = sizeof(nums)/sizeof(int);
    int target = 15;

    cout<<"Target index is: "<<LinearSearchTarget(nums, target, size)<<endl;
    return 0;
}



























// #include <iostream>
// using namespace std;

// int LinearSearch(int target){
//     int arr[]= {12, 15, 25, 98, 23, 45, 50};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<size; i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }

//     return -1;
// }

// int main(){

//     cout<<LinearSearch(98)<<endl;
//     return 0;
// }