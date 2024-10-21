#include<iostream>
using namespace std;

int main(){
     
     int n;
     cout<<"Enter the array length :";
     cin>>n;

     int arr[n];
     cout<<"Enter the array index value :";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     cout<<"The array value :"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
     }
    return 0;
}