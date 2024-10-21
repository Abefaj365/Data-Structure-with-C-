//addition and subtraction

#include<iostream>
using namespace std;

void PrintArr(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout<<*ptr<<endl;
        ptr = ptr + 1;
    }
}

int main(){
    int arr[] = {1,2,3};
    int n = 3;

    PrintArr(arr,n);

    return 0;
}