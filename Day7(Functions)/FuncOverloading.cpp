#include<iostream>
using namespace std;

int sum(int a,int b){
     return a+b;
}

double sum(double a,double b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}


int main(){

    cout<<sum(2,3,4)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4.2,9.1)<<endl;
    cout<<sum(6,6)<<endl;
    cout<<sum(5,8,9)<<endl;

    return 0;

}
