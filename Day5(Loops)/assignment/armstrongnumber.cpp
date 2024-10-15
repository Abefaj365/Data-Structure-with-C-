//WAP to input a number and check whether the number is an Armstrong number or not. 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n; 
    int num = n; 
    int cubeSum = 0; 
 
while(num > 0) { 
int lastDig = num % 10; 
cubeSum += lastDig * lastDig * lastDig; 
num /= 10; 
} 
 
 
if(n == cubeSum){
      cout<<n<<" is a Armstrong Number";
    } else { 
     cout << "NOT an Armstrong number\n";
}
}
