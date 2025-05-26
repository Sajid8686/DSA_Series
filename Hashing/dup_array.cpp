#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;


int main(){
    vector<int> vec= {3,5,7,8,2,3,4,2,2,4,5,5,4,4};
    unordered_set<int> nums;
    unordered_set<int> duplicate;

    for(int x : vec){
        if(nums.count(x)){
            duplicate.insert(x);
        }
        else{
            nums.insert(x);
        }
    }

    cout<<"duplicates are ";
    for(int num : duplicate){
        cout<<num<<" ";
    }
}





