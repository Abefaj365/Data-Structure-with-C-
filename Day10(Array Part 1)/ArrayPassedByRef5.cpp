#include<iostream>
using namespace std;

void printArr(int nums[],int n){

    
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
}

int main(){
    
    int arr[]={1,2,3};
    cout<<"Array Size :"<<sizeof(arr)<<endl;

    printArr(arr,3);

    return 0;
}