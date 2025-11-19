#include<iostream>
using namespace std;

void func(int mat[][4]){
    // cout<<"0th row pointer :"<<mat<<endl;
    // cout<<"1st row pointer :"<<mat+1<<endl;
    // cout<<"2nd row pointer :"<<mat+2<<endl;

    // cout<<"0th row value :"<<*mat<<endl;
    // cout<<"1st row value :"<<*(mat+1)<<endl;
    // cout<<"2nd row value :"<<*(mat+2)<<endl;

    // find perticular 8 value in matrix using dereferencing
    cout<<*(*(mat + 2) + 1)<<" is equal to :"<<mat[2][1]<<endl; //mat[2][1]

}

int main(){
    int mat[4][4] = {{1,2,3,4},{4,5,6,4},{7,8,9,4},{10,11,12,4}};

    func(mat);

    // cout<<mat<<"This value is equal to = "<<&mat[0][0]<<endl; //mat adress equal to the 1st element address
    // cout<<mat+1<<" != "<<&mat[0][1]<<endl;
    // cout<<mat+1<<" == "<<&mat[1][0]<<endl;
    return 0;
}