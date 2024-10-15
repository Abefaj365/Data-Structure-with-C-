#include<iostream>
using namespace std;

int isEven(int a){
    bool even;
    if(a%2==0){
        even = true;
    }else{
        even = false;
    }

    return even;
}


int main(){
    cout<<isEven(20);

    return 0;
}