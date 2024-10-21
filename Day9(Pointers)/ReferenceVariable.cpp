#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int &b = a;

    cout<<a<<endl;
    cout<<b<<endl;

    b = 25;

    cout<<a;

    return 0;
}