#include<iostream>
using namespace std;

int main(){

        int n;
        cout<<"Enter the number: \n";
        cin>>n;

        int res = 0 , lastDigit;

        while(n>0){
            lastDigit = n%10;

            res = res*10 + lastDigit;  //reverse the numbers and stored in res variable

            n /= 10;
        }

        cout<<res<<endl;

    return 0;
}