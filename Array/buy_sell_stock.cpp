#include <iostream>
using namespace std;

int BuySellStock(int price[], int size){

    int maxProfit = 0, bestBuy = price[0];

    for(int i=0; i<size; i++){
        if(price[i]>bestBuy){
            maxProfit = max(maxProfit, price[i]-bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }

    return maxProfit;
}

int main() {
    int price[] = {7,1,5,3,6,4,9};
    int size = sizeof(price)/sizeof(int);

    cout<<"Maximum Profit is: "<<BuySellStock(price, size)<<endl;
    return 0;
}