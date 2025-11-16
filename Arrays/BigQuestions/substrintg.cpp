#include<iostream>
using namespace std;

void printSubstring(int *arr, int n){
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            // cout<<"("<<start<<","<<end<<")"<<" ";

            for(int i= start; i<=end; i++){     //to print subsets according to range
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<endl;
    }
};

int main(){
    int arr[5]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int); //5

    printSubstring(arr, n);

    return 0;
}