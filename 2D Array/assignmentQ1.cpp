// finding total 7s in the matrix
#include<iostream>
using namespace std;

int totalCount(int nums[][4], int n, int m, int key){
    int sum = 0;
    int i = 1;

    for(int j = 0; j<n; j++){
        sum += nums[i][j];
    }
    
    cout<<sum<<endl;
}

int main(){
    int mat[4][4] = {{1,2,3,4},{7,5,6,4},{7,8,9,4},{10,7,12,4}};
    int key = 7;
    totalCount(mat, 4, 4, key);

    return 0;
}