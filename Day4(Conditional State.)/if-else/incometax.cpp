#include<iostream>
using namespace std;
int main(){
    int inc;
    cout<<"Enter your income : ";
    cin>>inc;

    if(inc>10){
        cout<<"30% tax";
    }
    else if(inc<5){
        cout<<"0% tax";
    }
    else if(inc>=5 || inc<=10){
        cout<<"20% tax";
    }
    
    return 0;
}
