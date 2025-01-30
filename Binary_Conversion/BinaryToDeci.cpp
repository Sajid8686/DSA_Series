// Binary to Decimal Conversion
#include<iostream>
using namespace std;

int BinaryToDeci(int biNum){
    int ans=0, pow=1;

    while (biNum>0){
        int remainder = biNum%10;
        ans += remainder*pow;
        biNum /=10;
        pow *=2;
    }
    return ans;
}


int main(){
    int biNum;
    cout<<"Enter a Binary Number to convert to Decimal: ";
    cin>>biNum;
    int deciNum = BinaryToDeci(biNum);
    cout<<deciNum <<endl;
    return 0;
}