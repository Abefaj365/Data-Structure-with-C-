#include<iostream>
using namespace std;

void printArr(int arr[]){
    int n= sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    
    int arr[]={1,2,3};

    int n = 3;
    printArr(arr);

    return 0;
}