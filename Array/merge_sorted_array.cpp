#include <iostream>
using namespace std;

void MergeSortedArray(int nums1[], int m, int nums2[], int n){
    int i = m-1, j=n-1, k=m+n-1;

    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        }
        else{
            nums1[k--] = nums2[j--];
        }
    }

    while(j>=0){
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int nums1[] = {1,2,3,0,0,0};
    int m = 3;

    int nums2[] = {2,5,6};
    int n = 3;

    MergeSortedArray(nums1, m, nums2, n);

    for(int i = 0; i < 6; ++i){
        cout << nums1[i] << " ";
    }


    return 0;
}