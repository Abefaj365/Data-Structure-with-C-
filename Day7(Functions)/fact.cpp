#include<iostream>
using namespace std;
 int factorial(int a){
     int fact = 1;
     for(int i=1;i<=a;i++){
        fact = fact*i;
     }
     return fact;
 }

 int main(){
    cout<<factorial(7);
    return 0;
 }