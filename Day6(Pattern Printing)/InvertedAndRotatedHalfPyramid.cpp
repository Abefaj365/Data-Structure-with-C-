//Inverted and rotated half pyramid 

//    *
//   **
//  ***
// ****      

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        //spaces
        for(int j=1;j<=4-i;j++){
            cout<<" ";
        }

        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}