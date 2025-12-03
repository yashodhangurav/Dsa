#include<iostream>
using namespace std;

int pow(int x, int n){       //'x' is base and 'n' is power

    if(n == 0){             //Base case
        return 1;           //becouse any number with pow 0 is always 1
    }

    // Time Complexity is O(log n)
    int halfPow = pow(x, n/2);                  //we are calling with half powers again and again untill we get the n = 0 , converting smallest problem
    int halfPowSquare = halfPow * halfPow;      //when n (pow) is even we need to mulyiply by half Power

    if(n%2 != 0){
        return x * halfPowSquare;       //when n is odd, we need to multiply again by base
    }

    return halfPowSquare;

}
int main(){
    cout<<pow(3,3);

    return 0;
}