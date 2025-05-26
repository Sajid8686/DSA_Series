#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,15,22,1,-15,24};
    int size = 6;
    int smallest = INT_MAX;
    int minIndex = 0;

    for(int i=0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            minIndex = i;
        }

        // smallest = min(arr[i], smallest);
    }

    cout<<"Smallest Number is: "<<smallest<<endl;
    cout<<"Index of Smallest Number is: "<<minIndex<<endl;
    return 0;
}