#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the numbers : ";
    cin>>num;

    bool isEven = (num%2==0)? true : false;
    cout<<isEven;

    return 0;
}