

//     ****
//    ****
//   ****
//  ****
// ****          

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        //spaces
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}