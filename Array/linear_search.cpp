#include <iostream>
using namespace std;

int LinearSearch(int target){
    int arr[]= {12, 15, 25, 98, 23, 45, 50};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }

    return -1;
}

int main(){

    cout<<LinearSearch(98)<<endl;
    return 0;
}