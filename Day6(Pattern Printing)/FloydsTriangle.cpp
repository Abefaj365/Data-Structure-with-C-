// 1 
// 2 3
// 4 5 6

#include<iostream>
using namespace std;
int main(){
    int num = 1;
    for(int i=1;i<=3;i++){
        for(int j=1; j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}