#include<iostream>
using namespace std;
int main(){
    float p,penc,r,t;
    cout<<"Enter the cost of pen, pencil and rubber : ";
    cin>>p>>penc>>r;
    t = p+penc+r;
    cout<<"Total cost : "<<t<<endl;
    cout<<"Total cost with 18% GST :"<<0.18*t;
    return 0;
}