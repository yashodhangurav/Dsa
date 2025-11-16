#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
};

// ascending order
// void bubbleSort(int *arr, int n){
//     for(int i=0; i<n-1; i++){           // outer loop is also running 0 to till n-2
//         for(int j=0; j<n-i-1; j++){     //find the relation of outer loop with the inner loop and find formula of range of inner loop
//             if(arr[j] > arr[j+1]){      //j is need to run till n-2, becouse we compare that n-2 to n-1
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     printArr(arr, n);
// }

// dscending order
void bubbleSort(int *arr, int n){
    for(int i=0; i<n-1; i++){    
        bool isSwap = false;            //for optimization of time complexity , if there is already a sorted array then there is no need to run the all outer loops       
        
        for(int j=0; j<n-i-1; j++){     
            if(arr[j] < arr[j+1]){      //descending order
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
       if(!isSwap){
        // array is already sorted
        return;                                 //we return from here fo the outer loop runs only one time
       } 
    }
    printArr(arr, n);
}

int main(){
    int arr[6] = {2,4,1,3,6,1};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    
    return 0;
}