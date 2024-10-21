//Slightly optimized approach

#include<iostream>
using namespace std;

void maxSubArraySum(int *arr,int n){
    int maxSum = INT8_MIN;
    
    for(int start=0;start<n;start++){
        int currSum = 0;
        for(int end=start;end<n;end++){
            currSum+=arr[end];
            maxSum = max(maxSum,currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray Sum : "<<maxSum<<endl;
}

int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n = 6;

    maxSubArraySum(arr,n);

    return 0;                                                      
}