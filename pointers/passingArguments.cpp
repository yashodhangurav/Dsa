#include<iostream>
using namespace std;

// // call by value
// void changeA(int a){
//     a = 20;
//     cout<<a<<"\n";
// }


// pass by reference using pointers
void changeB( int *ptr){    //accepting the address of any varible as a argument by calling
    *ptr = 20;              //dereferencing the ptr and change the value which present in that adress, the changese will appeared in original variable

    cout<<*ptr<<"\n";
}
int main(){
    int a = 10;
    // changeA(a);
    int b = 10;
    changeB(&b);        //passing the add of b to the ptr argument

    cout<<b<<"\n";      //after the calling above function this line excuted so changes are already done in actual variable


    return 0;
}