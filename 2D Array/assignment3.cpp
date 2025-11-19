// finding total 7s in the matrix
#include<iostream>
using namespace std;

int transpose(int nums[][4], int n, int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<nums[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int mat[4][4] = {{1,2,3,4},
                    {7,5,6,4},
                    {7,8,9,4},
                    {8,7,6,4}};
    int key = 7;
    transpose(mat, 4, 4);

    return 0;
}