//WAP to find the factorial

  #include<iostream>
  using namespace std;
  int main(){
    int n;
    cout<<"enter the number :";
    cin>>n; 
    int fact = 1; 
    for(int i=1; i<=n; i++) { 
        fact *= i; 
    } 
 
 
    cout << "factorial of " << n << " = " << fact << "\n"; 

    return 0;
  }