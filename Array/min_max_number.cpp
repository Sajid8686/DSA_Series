#include <iostream>
using namespace std;

int main(){
    int nums[] = {12, 15, -10, -50, 50, 90};
    int size = sizeof(nums)/sizeof(nums[0]);
    int smallest_number = INT_MAX;
    int largest_number = INT_MIN;
    int small_index;
    int large_index;

    for (int i=0; i<size; i++){
        if(nums[i]<smallest_number){
            small_index = i;
            smallest_number = nums[i];

        }

        if(nums[i]>largest_number){
            large_index = i;
            largest_number= nums[i];
        }

        // smallest_number = min(nums[i], smallest_number);
        // largest_number = max(nums[i], smallest_number);
    }

    cout<<"Size= " <<size<<endl;
    cout<<"Smallest Number= " <<smallest_number<<endl;
    cout<<"Small Number Index= " <<small_index<<endl;
    cout<<"Largest Number= " <<largest_number<<endl;
    cout<<"Large Number Index= " <<large_index<<endl;
}