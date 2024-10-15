#include<iostream>
using namespace std;
int main(){
    float SI,p,r,t;
    cout<<"Enter price,rate and time :";
    cin>>p>>r>>t;
    SI = (p*r*t)/100;
    cout<<"The simple interest is : "<<SI;
    return 0;
}