#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(int)<<endl;

    return 0;
}