#include<iostream>
using namespace std;

int main(){
    int num;
    
    do{
        cout<<"Enter the number: ";
        cin>>num;

        if(num%10 == 0){
            continue;
        }
        cout<<"printed\t"<<num<<endl;
    }while(true);
    return 0;
};