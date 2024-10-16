#include<iostream>
using namespace std;

void DecToBin(int dec){
    int n = dec;
    int bin = 0;
    int pow = 1;

    while(n>0){
        int rem = n % 2;
        bin += rem*pow;
            n = n / 2;
        pow = pow * 10;
    }

    cout<<bin<<endl;
}

int main(){

         DecToBin(11);

         return 0;

}