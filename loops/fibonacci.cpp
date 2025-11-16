#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int answer = 0;
    int p1 = 0, p2 = 1;             //we already knew this value (finonacci of 0 is 0, and 1 is 1)
    
    for(int i =2; i<=n; i++){       
        answer = p1+p2;
        p1 = p2;
        p2 = answer;
    }
    cout<<answer<<endl;
    return 0;
}