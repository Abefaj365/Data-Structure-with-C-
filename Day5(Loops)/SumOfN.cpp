#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        sum = sum + i;

        cout<<i<<",";
    }
    cout<<"\nThe sum of the numbers are : "<<sum;

    return 0;
}