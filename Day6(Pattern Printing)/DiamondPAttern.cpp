
//    *   
//   ***  
//  ***** 
// *******
// *******
//  *****
//   ***
//    *      

#include<iostream>
using namespace std;
int main(){
    //upper pyramid
    for(int i=1;i<=4;i++){
        //space
        for(int j=1;j<=4-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower pyramid
    for(int i=4;i>=1;i--){
        //space
        for(int j=1;j<=4-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}