#include<iostream>
using namespace std;

void swap(int *a, int *b){        //after the completion of the swap function it will deleted from the stack so the updation not happens in tyhe main function
    cout<<*a<<" "<<*b<<endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<*a<<" "<<*b<<endl;
}

int main(){
    int x= 5, y=10;
    cout<<x<<" "<<y<<" "<<endl;
    
    swap(&x,&y);                    //passing the address of x and y                     
    
    cout<<x<<" "<<y<<endl;          //because we doing pass by reference the updatuion occurs in the main variable coz here we are passing the actual adress of the variable

    return 0;
}