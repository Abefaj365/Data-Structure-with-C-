#include<iostream>
using namespace std;

void maxprofit(int *prices,int n){
    int bestBuy[100000];
    bestBuy[0]= INT32_MAX;

    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    }

    int maxprofit = 0;
    for(int i=0;i<n;i++){
        int currProfit = prices[i]-bestBuy[i];
        maxprofit=max(maxprofit,currProfit);
    }

    cout<<"Max profit = "<<maxprofit<<endl;
}

int main(){
    int prices[6]={7,1,5,3,6,4};
    int n = 6;
    maxprofit(prices,n);

    return 0;                                                      
}