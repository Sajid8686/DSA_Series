#include <iostream>
using namespace std;

bool IsValidPalindrome(string s, int left, int right){
    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        --right;
    }
    return true;
}


bool validPalindrome(string s) {
    int left=0;
    int right=s.size()-1;

    while(left<right){
        if(s[left] == s[right]){
            left++;
            right--;
        }
        else{
            if(IsValidPalindrome(s, left+1, right)) return true;
            else if(IsValidPalindrome(s, left, right-1)) return true;
            else{
                return false;
            }
        }
    }
    return true;
}

int main() {
    string s = "abca";
    cout<<validPalindrome(s)<<endl;
    return 0;
}