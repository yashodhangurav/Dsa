#include<iostream>
using namespace std;

int main(){

//    int a,b,c;

//    cout<<"Enter the numbers :\n";
//    cin>>a>>b>>c;

//    if(a>b && a>c){
//     cout<<"a is largest among them";
//    }else if(b>a && b>c){
//     cout<<"b is largest among them";
//    }else{
//     cout<<"c is largest among them";
//    }


// // ternary operator

//  int a, b;

//  cout<<"Enter the numbers : ";
//  cin>>a>>b;

//  int largest = (a>b) ? a : b ;
 
//  cout<<"The largest number is : "<<largest;

 

// switch statement
int num;
cout<<"Enter number of the week: \n";

cin>>num;

switch(num){
    case 1 : cout<<"Monday";
    break;
    case 2 : cout<<"Tuesday";
    break;
    case 3 : cout<<"wenesday";
    break;
    case 4 : cout<<"thurday";
    break;
    case 5 : cout<<"friday";
    break;
    case 6 : cout<<"saterday";
    break;
    default : cout<< "Invalid";
}
    return 0;
}