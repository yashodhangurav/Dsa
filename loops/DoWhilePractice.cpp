// we are taking multiple inputs from the user till the input number is multiple of 10
#include<iostream>
using namespace std;

int main(){

    int num;

    // do{
    //     cout<<"Enter the number : ";
    //     cin>>num;
    // }while(num%10 != 0);

    // also

    do{
        cout<<"enter the number: \n";
        cin>>num;

        if(num % 10 == 0){
            break;
        }
        cout<<"You entered : "<<num<<endl;
    }while(true); //for infinite loop we need to give "true" value in condition

    return 0;
}