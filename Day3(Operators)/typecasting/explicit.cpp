//explicit means data type conversion done by a programmer..
#include<iostream>
using namespace std;
int main(){
    float pi = 3.1416;
    cout<<(int)('A')<<endl;
    cout<<(int)pi<<endl;
    cout<<((float)10/3)<<endl;
    cout<<(char)('A'+1)<<endl;
    cout<<(bool)(3+1)<<endl;
    cout<<((bool)3+1)<<endl;
    return 0;
}