// WAP to print the multiplication table of a number, entered by the user.

#include<iostream>
using namespace std;
int main(){
    int n = 8; 
    for(int i=1; i<=10; i++) { 
    cout << (n * i) << " "; 
    } 
    cout << endl;

    return 0;
}