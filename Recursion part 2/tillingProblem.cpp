// asked in GOOGLE and AMAZON interviews

#include<iostream>
using namespace std;

int tilingProblem(int n){       // n means floar size 2*n 

    // Base case
    if(n == 0 || n == 1){
        return 1;
    }

    return tilingProblem(n-1)  + tilingProblem(n-2);    // vertically + horizontally        

}

int main(){

    cout<<tilingProblem(5);
    return 0;
}