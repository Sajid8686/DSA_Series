#include <iostream>
using namespace std;

void ResverseString(string s){
    int left=0, right=s.size()-1;

    while(left < right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    string s = "hello";
    ResverseString(s);

    // cout<<s;
    return 0;
}