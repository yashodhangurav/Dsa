#include<iostream>
using namespace std;

int bruteFoce(int mat[][4], int n, int key){
    //time complexity is  O(n*m)
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(mat[i][j] == key){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    return key;
}

void binarySearch(int mat[][4], int n, int key){
    int mid =0;
    for(int i = 0; i<n; i++){
        
    }
}


int main(){
    int arr[4][4]= {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int key = 48;
    int n = 4, m = 4;
    bruteFoce(arr, n, key);
    return 0;
}