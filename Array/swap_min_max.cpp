#include <iostream>
using namespace std;

void SwapMinMax(int arr[], int size){

    int miniNum = 0;
    int maxNum = 0;

    for(int i=0; i<size; i++){

        if(arr[i]<arr[miniNum]){
            miniNum=i;
        }

        if(arr[i]>arr[maxNum]){
            maxNum=i;
        }
    }
    
    swap(arr[miniNum], arr[maxNum]);
    
}

int main(){
    int arr[] = {5,6,7,8,9, 12};
    int size = 6;
    SwapMinMax(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}