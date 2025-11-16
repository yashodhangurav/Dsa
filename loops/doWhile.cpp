// the main difference between do-while and while loop is, do-while loop runs atleast one time irrespective of condition 

#include<iostream>
using namespace std;

int main(){

    int i = 1;

    // do{
    //     cout<<"yashodhan\n"<<" ";
    //     i++;
    // } while(i<=5);

    while(i<10){
        if(i==3){
            break;
        }
        cout<<i<<" ";
        i++;
    }
    cout<<"we are out from the loop";

    return 0;
}