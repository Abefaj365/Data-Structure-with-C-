//Sort this array of characters using insertion sort in descending order

#include<iostream>
using namespace std;
int main(){
    char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int n=sizeof(arr)/sizeof(char);
    for(int i=1;i<n;i++){
        int j=i-1;
        char temp=arr[i];               
        while(j>=0 && arr[j]<temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){   
        cout<<arr[i]<<",";
    }
    return 0;
}