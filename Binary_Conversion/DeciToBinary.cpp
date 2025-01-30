// Decimal to Binary Conversion
#include <iostream>
using namespace std;

int DecimalToBinary(int decimal){
    int ans = 0;
    int paw = 1;

    while(decimal>0){
        int remainder = decimal%2;
        decimal /= 2;

        ans += (remainder * paw);
        paw *=10;
    }
    return ans;
}


int main(){
    int decimal;
    cout<< "Enter Decimal Number to Convert to Binary: ";
    cin>>decimal;
    int biNum = DecimalToBinary(decimal);
    cout<<biNum <<endl;
    return 0;
}