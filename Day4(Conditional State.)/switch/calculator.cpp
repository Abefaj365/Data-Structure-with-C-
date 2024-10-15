#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"Enter a and b :";
    cin>>a>>b;
    cout<<"Enter the character what you want to operate :";
    cin>>c;

    switch(c){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;

        default: cout<<"Invalid";
    }

    return 0;
}