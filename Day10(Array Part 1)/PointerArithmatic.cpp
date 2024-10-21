//Addition and Subtraction

#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int *ptr = &a;

    cout<<ptr<<endl;
    cout<<ptr+3<<endl;
    cout<<*ptr<<endl;
    cout<<*(ptr+3)<<endl;

    return 0;
}