#include <iostream>
using namespace std;

int FirstOccurance(string str1, string str2){
    int n = str1.size();
    int m = str2.size();

    for(int i=0; i<= n-m; ++i){
        if(str1[i] == str2[0]){
            int temp=i;
            int j=0;
            while(j<m){
                if(str1[temp] != str2[j]) break;
                j++;
                temp++;
            }

            if(j==m){
                return i;
            }
        }
        
    }

    return -1;

}

int main() {
    string str1 = "sadbutsad";
    string str2 = "but";

    cout<<FirstOccurance(str1, str2)<<endl;

    return 0;
}