#include<iostream>
using namespace std;

int main(){
     
     int arr[5]={1,3,8,4,9};
     int max = arr[0];
     int min = arr[0];

     for(int i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }

        if(arr[i]<min){
            min = arr[i];
        }
     }

     cout<<"Largest:"<<max<<endl;
     cout<<"Smallest:"<<min;
    return 0;
}