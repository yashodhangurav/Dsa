#include<iostream>
using namespace std;


int diagonalSum(int mat[][4], int n){

    // // Time complexity is -  O(n^2)
    // int sum = 0;
    // for(int i =0; i<n; i++){            //row        n times
    //     for(int j =0; j<n; j++){                    /// n times
    //         if(i == j){
    //             sum += mat[i][j];
    //         }else if( j == n-i-1){
    //             sum += mat[i][j];
    //         }
    //     }
    // }


    // with O(n) time complexity
    int sum = 0;
    for(int i = 0; i<n; i++){           //run only n times
        sum += mat[i][i];               // as we know that if both i and j same we need to add 
        if(i != n-i-1){                 // this means i != j value then (it will also remove the common)
            sum += mat[i][n-i-1];       // mat[i][j]
        }

    }
    cout<<"SUM = "<<sum;
    return sum;
}

int main(){
    int arr[4][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16},};
    int n = 4, m=4;
    diagonalSum(arr, n);
    return 0;
}