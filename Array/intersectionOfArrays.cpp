#include <iostream>
using namespace std;

void IntersectionOfArrays(int firstArray[], int size1, int secondArray[], int size2){

    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){

            if(firstArray[i]==secondArray[j]){
                cout<<secondArray[j]<<" ";
            }
        }
    }
}

int main() {
    int firstArray[]= {1,2,3,4,5,8};
    int secondArray[]= {5,6,7,8};

    int size1 = sizeof(firstArray)/sizeof(int);
    int size2 = sizeof(secondArray)/sizeof(int);

    IntersectionOfArrays(firstArray, size1, secondArray, size2);
    return 0;
}