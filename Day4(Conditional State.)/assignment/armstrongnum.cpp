#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter 3 digit number";
    cin>>n;

    int num = n;
    int dig1 = num % 10;
    num = num / 10;
    int dig2 = num % 10;
    num = num / 10;  
    int dig3 = num % 10;
    num = num / 10;  




    int cubesum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;

    if(cubesum == n){
        cout<<n<<" is an armstrong number";
    }
    else{
        cout<<n<<" not an armstrong number";
    }



return 0;
}