#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int> A = {4,1,7,8};
    vector<int> B = {2,3,6,5};

    sort(A.begin(), A.end());                    //sorting in ascending order to get minimum absolute diff of pairs
    sort(B.begin(), B.end());

    int absDiff = 0;
    for(int  i =0; i<A.size(); i++){
        absDiff += abs(A[i]-B[i]);              //absolute Diff of pairs
    }

    cout<<"Absolute Diff of pairs is: "<<absDiff<<endl;

    return 0;
}