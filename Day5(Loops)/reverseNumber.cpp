#include<iostream>
using namespace std;
int main(){
    int n,result=0;
    cout<<"Enter the numbers : ";
    cin>>n;

    while(n>0){
        int lastDig = n%10;
        result = result*10 + lastDig;
        n/=10;
    }

    cout<<result;

    return 0;
}