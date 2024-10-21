#include<iostream>
using namespace std;

void trap(int *heights,int n){
    int leftmax[20000],rightmax[20000];
    leftmax[0]=heights[0];
    rightmax[n-1]=heights[n-1];

    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],heights[i-1]);
    }

    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],heights[i+1]);
    }

    int waterTrapped = 0;
    for(int i=0;i<n;i++){
        int currWater = min(leftmax[i],rightmax[i])-heights[i];

        if(currWater>0){
            waterTrapped+=currWater;
        }
    }
    cout<<"Water trapped : "<<waterTrapped;
}


int main(){
    int heights[7]={4,2,0,6,3,2,5};
    int n = 7;
    trap(heights,n);

    return 0;
}