#include <iostream>
using namespace std;

void UniqueValues(int arr[], int size){
    for(int i=0; i<size; i++){
        int uniqNum=0;
        for (int j = 0; j < size; j++){
            if (arr[i]==arr[j]){
                uniqNum++;
            }
        }
        if(uniqNum==1){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[] = {1,1,2,2,2,3,3,4,5,5,6,6,7,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unique Value is: ";
    UniqueValues(arr, size);
    return 0;
}