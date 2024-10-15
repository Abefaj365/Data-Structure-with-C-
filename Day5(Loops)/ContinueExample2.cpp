#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;true;i++){
        int n;

        cout<<"Enter the number : ";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"Your Entered number is :"<<n<<endl;
    }
    return 0;
}