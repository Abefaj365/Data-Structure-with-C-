#include<iostream>
using namespace std;
int main(){
    cout<<'A' + 1<<endl; //answer will be integer because (double > float > int > char > bool) priority
    cout<<'A';
    return 0;
}