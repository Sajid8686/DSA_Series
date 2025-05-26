#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
string reverseWords(string &s) {
        int j = 0, n = s.length();
        for(int i = 0 ; i< n; ++i){
            if(s[i] == ' '){
                reverse(s.begin()+j, s.begin()+i);
                j= i+1;
            } 
        }
        reverse(s.begin()+j, s.end());
        return s;
    }

int main() {
    cout << "Hello, World!" << endl;
    string s = "Let's take LeetCode contest";
    cout<<reverseWords(s);
    return 0;
}
