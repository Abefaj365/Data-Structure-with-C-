#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool prime = true;
    for(int i=2; i<=n-1;i++){
        if(n%i==0){
            prime = false;
            break;
        }
    }

    if(prime==true){
       cout<<n<<" is a Prime Number";
    }
    else{
        cout<<n<<" is a Composite Number";
    }

    return 0;
}