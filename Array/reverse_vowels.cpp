#include <iostream>
using namespace std;

bool isVowel(char ch) {
    static const string vowels = "aeiouAEIOU";
    return vowels.find(ch) != string::npos;
}

string ReverseVowels(string s){
    int left=0, right=s.size()-1;


    while (left < right){
        
        while(left<right && !isVowel(s[left])) left++;
        while(left<right && !isVowel(s[right])) right--;

        if(left<right){
            swap(s[left], s[right]);
            left++;
            right--;
        }

    }

    return s;
    
}

int main() {
    string s = "IceCream";

    cout<<ReverseVowels(s);
    return 0;
}