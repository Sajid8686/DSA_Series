#include <iostream>
using namespace std;

int SumOfArray(int sumArr[], int size){
    int sum;
    for (int i = 0; i < size; i++){
        sum += sumArr[i];
    }
    return sum;
}

int ProductOfArray(int prodArr[], int size){
    int product=1;
    for(int i=0; i<size; i++){
        product*=prodArr[i];
    }
    return product;
}

int main(){
    int sumArr[] = {10,20,30,40,50};
    int prodArr[] = {1,2,3,4,5};
    int size = 5;

    cout<<"Sum of Array is: " <<SumOfArray(sumArr, size)<<endl;
    cout<<"Product of Array is: " <<ProductOfArray(prodArr, size)<<endl;
    return 0;
}