#include<iostream>
using namespace std;

int fact( int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int binCo(int n, int r){
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);

    return val1/(val2*val3);
}

int main(){
    cout<<binCo(4,2);

    return 0;
}