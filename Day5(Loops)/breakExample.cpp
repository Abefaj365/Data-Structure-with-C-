#include<iostream>
using namespace std;
int main(){
    int i =1;
    while(i<=10){
        if(i==4){
            break;
        }
        cout<<i<<endl;
        i++;
    }
    cout<<"Out of loop now";
    return 0;
}