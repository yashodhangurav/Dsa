#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the row of the stars: ";
    cin>>num;

    for(int i=num; i>0; i--){
        cout<<i<<endl;
    }

    return 0;
}