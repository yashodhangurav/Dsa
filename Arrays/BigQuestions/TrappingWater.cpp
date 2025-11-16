#include<iostream>
using namespace std;

int trappingWater(int *heightArr, int n){
    int leftMax[20000], rightMax[20000];
    leftMax[0]= heightArr[0], rightMax[n-1] = heightArr[n-1];

    for(int i =1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], heightArr[i-1]);
    }

    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], heightArr[i+1]);
    }

    // total watertrapped
    int waterTrapped = 0;
    for(int i=0; i<n; i++){
        int currTrapped = min(leftMax[i], rightMax[i]) - heightArr[i];
        if(currTrapped > 0){
            waterTrapped += currTrapped;
        }
    }
    cout<<"Total water trapped is : "<<waterTrapped<<endl;
    return waterTrapped;
}

int main(){

    int heightArr[7]= {4,2,0,6,3,2,5};
    int n = sizeof(heightArr)/sizeof(int);

    trappingWater(heightArr, n);

    return 0;
}