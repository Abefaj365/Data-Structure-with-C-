#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    int **pptr2 = &ptr;

    cout<<&ptr<<" = "<<pptr2;

    return 0;
}