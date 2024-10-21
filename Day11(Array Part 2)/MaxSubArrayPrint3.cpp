//Kadane's Algorithm

#include<iostream>
using namespace std;

void maxSubArraySum(int *arr,int n){
    int maxSum = INT8_MIN;
    int currSum = 0;
    
    for(int i=0;i<n;i++){
        
            currSum+=arr[i];
            maxSum = max(maxSum,currSum);
        
            if(currSum<0){
                currSum = 0;
            } 
        }
      cout<<"Maximum Subarray Sum : "<<maxSum<<endl;
    }

int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n = 6;

    maxSubArraySum(arr,n);

    return 0;                                                      
}