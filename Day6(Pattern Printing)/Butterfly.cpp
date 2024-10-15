
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

#include<iostream>
using namespace std;
int main(){
    //upper butterfly
    for(int i=1;i<=4;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=2*(4-i);j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //upper butterfly
    for(int i=4;i>=1;i--){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=2*(4-i);j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


}