#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter values for a and b : ";
    cin>>a>>b;
     int ans = (a>b)? a : b ;

     cout<<ans<<" is the largest";

     return 0;
}