#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter values for a, b, c :";
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"a is the largest";
    }

    else if(a<b && b>c){
        cout<<"b is the largest";
    }

    else{
        cout<<"c is the greatest";
    }

    return 0;
}