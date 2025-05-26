#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,15,22,1,-15,24};
    int size = 6;
    int largest = INT_MIN;
    int maxIndex = 0;

    for(int i=0; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
            maxIndex = i;
        }

        // largest = max(arr[i], largest);
    }

    cout<<"Largest Number is: "<<largest<<endl;
    cout<<"Index of Largest Number is: "<<maxIndex<<endl;
    return 0;
}