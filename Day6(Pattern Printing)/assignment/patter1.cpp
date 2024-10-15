

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include<iostream>
using namespace std;
int main(){
    bool value = true;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<value;
            value = !value;
        }
        cout<<endl;
    }

    return 0;
}