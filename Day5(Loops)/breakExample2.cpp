//WAP where user can keep entering numbers till they enter a multiple of 10

#include<iostream>
using namespace std;
int main(){
    do{
        int n;
        cout<<"Enter the number : ";
        cin>>n;

        if(n%10==0){
            break;
        }
        cout<<"your entered number is : "<<n<<endl;
    }while(true);

    return 0;
}