#include<iostream>
using namespace std;

int isPrime(int a){
    bool prime = true;
    if(a==1){
        prime = false;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            prime = false;
            break;
        }
    }
    return prime; //return 0 means not prime and return 1 means prime number
}
 
int main(){
    cout<<isPrime(1)<<endl;
    cout<<isPrime(5)<<endl;
    cout<<isPrime(7)<<endl;
    cout<<isPrime(8)<<endl;
    cout<<isPrime(2)<<endl;

    return 0;
}