#include<iostream>
using namespace std;
int main(){
    int n,digSum=0;
    cout<<"Enter the numbers : ";
    cin>>n;

    while(n>0){
        int lastDig = n%10;
        if(lastDig%2!=0){
        digSum += lastDig;
        }
        n/=10;
    }

    cout<<digSum;

    return 0;
}