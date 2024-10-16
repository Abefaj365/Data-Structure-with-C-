#include<iostream>
using namespace std;

void binToDec(int bin){
    int n = bin;
    int dec = 0;
    int pow = 1;

    while(n>0){
        int rem = n % 10;
        dec = dec + (rem*pow);
        pow = pow * 2;
        n = n / 10;
    }

    cout<<dec<<endl;
}

int main(){

         binToDec(11);

         return 0;

}