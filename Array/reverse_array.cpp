
#include <iostream>
using namespace std;

void ReverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    

}

int main() {
    int arr[] = {4,5,8,2,9,1,4,7,8,9};
    // int size = 6;
    int size = sizeof(arr)/sizeof(int);

    ReverseArray(arr, size);

    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}



























// #include <iostream>
// using namespace std;

// void ReverseArray(int arr[], int size){
//     int start = 0, end = size-1;

//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
    
    
// }

// int main(){
//     int arr[]= {1,2,3,4,5};
//     int size = 5;
//     ReverseArray(arr, size);
//     cout<<"Swapped Array is: [";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"]";

//     return 0;
// }