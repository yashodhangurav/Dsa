#include<iostream>
using namespace std;

// 1 method-----------------------------------------------------bruet force method
void maxSubarraySum(int *arr, int n){
    int maxSum= INT_MIN;                    //INT_MIN is the most minimum value present in C++ language
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currSum = 0;
            for(int i=start; i<=end; i++){
                currSum +=arr[i];
            }
            cout<<currSum<<", ";
            maxSum = max(maxSum, currSum);  //it will return the maximum value of currSum and assigned to the maxSum
        }
        cout<<endl;
    }
    cout<<"Maximum term of the subarray is :"<<maxSum<<endl;
}

// 2 method --------------------------------------------------slightlyOptimized approach
void maxSubarraySum2(int *arr, int n){
    int maxSum= INT_MIN;                    //INT_MIN is the most minimum value present in C++ language
    for(int start=0; start<n; start++){
        int currSum = 0; //after each row (starting index) currSum becomes zero 
    
        for(int end=start; end<n; end++){   //adding the all indexes starting with same number
            currSum += arr[end];            
            maxSum = max(maxSum, currSum);
        }
    }
    cout<<"Maximum term of the subarray is :"<<maxSum<<endl;
}

// 3 method ---------------------------------------------Kadans Algorithm
void maxSubarraySum3(int *arr, int n){
    int currSum = 0;
    int maxSum= INT_MIN;                    //INT_MIN is the most minimum value present in C++ language
    for(int start=0; start<n; start++){
        currSum += arr[start];
        maxSum = max(maxSum, currSum);
        if(currSum<0){                      //if currSum is become less than 0 then there is no need to add that in sum;
            currSum = 0;
        } 
      }
      cout<<"maximum sum of the subArray is: "<<maxSum;
    }


int main(){
    int arr[6] = {5,4,-7,6,-2,4};
    int n = sizeof(arr)/sizeof(int);

    // maxSubarraySum(arr, n);
    // maxSubarraySum2(arr, n);
    maxSubarraySum3(arr, n);

    return 0;
}