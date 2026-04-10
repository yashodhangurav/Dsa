#include<iostream>
using namespace std;


int main(){
    int arr[4][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16},};
    int n = 4, m=4;
    diagonalSum(arr, n);
    return 0;
}