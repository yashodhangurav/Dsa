#include<iostream>
using namespace std;

// // bruthForce Search method
// int bruteFoce(int mat[][4], int n, int key){
//     //time complexity is  O(n*m)
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             if(mat[i][j] == key){
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
//     return key;
// }

// binary search method
// bool searchMatrix(int matrix[][4], int rows, int cols, int target) {
//     int low = 0;
//     int high = rows * cols - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         int r = mid / cols;     // row index
//         int c = mid % cols;     // column index

//         int element = matrix[r][c];

//         if (element == target)
//             return true;
//         else if (element < target)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     return false;
// }


// -------------------------------staire Case (optimized method)

bool  stairCaseSearch(int mat[][4], int n, int m, int key){
    int i = 0, j = m-1;
    // O(n+m)
    while(i<n && j>=0){
        if(mat[i][j] == key){
            cout<<"The key present in the "<<i<<","<<j<<" ";
            return true;
        }else if(mat[i][j]<key){
            i++;
        }else{
            j--;
        }
    }
    cout<<"Key was not found in the give matrix";
    return false;
}


void binarySearch(int mat[][4], int n, int key){
    int mid =0;
    for(int i = 0; i<n; i++){
        
    }
}


int main(){
    int arr[4][4]= {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int key = 39;
    int n = 4, m = 4;
    // bruteFoce(arr, n, key);
    // cout<<searchMatrix(arr,n,m,key);

    stairCaseSearch(arr,n,m,key);
    return 0;
}