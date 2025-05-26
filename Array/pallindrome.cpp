#include <iostream>
#include<string>
#include <cctype>

using namespace std;

bool Pallindrom(string str1, int n){
    int left=0, right=n-1;
    while(left < right){
        
        while(left<right && !isalnum(str1[left])) left++;
        while(left<right && !isalnum(str1[right])) right--;

        if(tolower(str1[left]) != tolower(str1[right])){
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string str1 = "A man, a plan, a canal: Panama";
    int n = str1.size();

    cout<<Pallindrom(str1, n)<<endl;
    return 0;
}