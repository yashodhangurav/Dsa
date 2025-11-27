// we cant make directly dynamically 2d array so we create 1d arrays and later join it

#include<iostream>
using namespace std;


int main(){

    int rows,cols;
    cout<<"Enter the rows number : ";
    cin>>rows;
    cout<<"Enter the cols number : ";
    cin>>cols;


    // create of matrix
    int* *matrix = new int*[rows];      //array of pointers (each row is a pointer)
    for(int i = 0; i<rows; i++){
        matrix[i] = new int[cols];      //each row(i) consist of one dimensional array(cols)
    }

    // data store
    int x = 1;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++ ){
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<matrix[2][2]<<endl;
    cout<< *(*(matrix + 2)+2);
    return 0;
}