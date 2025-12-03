// #include<iostream>
// using namespace std;

// // recursive function
// void func(){
//     cout<<"Hello word";
//     func();                 //calling itself 
// }

// int main(){
//     func();
//     return 0;
// }

// ---------------------------------------factorial using recursion

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n == 0){                      //BASE CASE 
//         return 1;                   //return value of f(0)= 1 and come out of the scope
//     }
//     return n * factorial(n-1);      //calling itself with multipliying n and passing n-1 again to same call 
// }

// int main(){
//      int ans = factorial(5);
//      cout<<ans;

//     return 0;
// }


// ---------------------------numbers in decreasing order

#include<iostream>
using namespace std;

int nums(int n){
    if(n == 0){
        return 0;
    }
    // decreasing order
    // cout<<n<<", ";
    // return nums(n-1);
    // increasing order
    nums(n-1);
    cout<<n<<", ";
    return n;
}

int main(){
    int ans = nums(100);
    // cout<<ans<<", ";
    return 0;
}