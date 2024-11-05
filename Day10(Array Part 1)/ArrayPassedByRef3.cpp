#include<iostream>
using namespace std;

void func(int arr[]){  //or we can use (*arr) like pointer
    arr[0]=1000;

}


int main(){
     
     int arr[]={1,2,3};
     func(arr);

     cout<<arr[0];
    return 0;
}