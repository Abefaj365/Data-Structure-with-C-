#include<iostream>
using namespace std;

void sayhello(){
    cout<<"HEllo\n";
}

void assistant(){
    sayhello();
    cout<<"Done";
}


int main(){
    assistant();

    return 0;
}