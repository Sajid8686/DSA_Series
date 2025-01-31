
//Bitwise Operator
#include<iostream>
#include<string>
using namespace std;

void BitwiseOperations(int firstNum, int secNum){
    int operatorName = 0;
    while (operatorName !=6)
    {

        cout << "\n***** Select a Number *****\n"
            << "Choose the Number for which operator you want to Use.\n"
            << "1 - AND (&) bitwise operator\n"
            << "2 - OR (|) bitwise operator\n"
            << "3 - XOR (^) bitwise operator\n"
            << "4 - Left-Shift (<<) bitwise operator\n"
            << "5 - Right-Shift (>>) bitwise operator\n"
            << "6 - Exit\n\n";
        cout<< "Enter Number for Operator: ";
        cin>>operatorName;

        if (operatorName == 1)
        {
            int andResult = firstNum & secNum;
            cout<< "Result by using AND(&) Operator: " + to_string(andResult) <<endl;
            
        }
        else if (operatorName == 2)
        {
            int orResult = firstNum | secNum;
            cout<< "Result by using OR(|) Operator: " + to_string(orResult)<<endl;
        }
        else if (operatorName == 3)
        {
            int xorResult = firstNum ^ secNum;
            cout<< "Result by using XOR(^) Operator: " + to_string(xorResult)<<endl;
        }
        else if (operatorName == 4)
        {
            int leftShift = firstNum << secNum;
            cout<< "Result by using Left-shift(<<) Operator: " + to_string(leftShift)<<endl;
        }
        else if (operatorName == 5)
        {
            int rightShift = firstNum >> secNum;
            cout<< "Result by using Right-shift(>>) Operator: " + to_string(rightShift)<<endl;
        }
        else if (operatorName == 6)
        {
            cout<< "\n***************************************** \n" 
                    <<"Thank you for using Bitwise operators \n"
                    <<"*****************************************\n";
        }
        else{
            cout<<"Enter Correct Number from 1 to 6 \n";
        }
    }
}

int main(){
    int firstNum, secNum;
    cout<<"******** USE OF BITWISE OPERATORS *********\n"<<endl;
    cout<< "Enter First Number: ";
    cin>>firstNum;
    cout<< "Enter Second Number: ";
    cin>>secNum;

    BitwiseOperations(firstNum, secNum);
    return 0;
}
