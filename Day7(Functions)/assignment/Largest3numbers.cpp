#include<iostream>
using namespace std;

int largest(int a, int b, int c) { 
if(a >= b && a >= c) { 
return a; 
} else if(b >= c) { 
return b; 
} else { 
return c; 
} 
} 

int main(){
    cout<<largest(4,8,2);

    return 0;
}