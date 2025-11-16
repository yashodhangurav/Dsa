#include<iostream>
using namespace std;

bool isPalindrome(int x){
    int temp = x;
    int rev = 0;
    while(x>0){
        int lastDig = x%10;
        rev = rev*10 + lastDig;
        x = x/10;
    }
    if(temp == rev){
        return true;
    }else{
        return false;
    }
}


int main(){
    int x;
    cout<<"Enter any numberber which u want to check whether it is a palindrom or not: "<<endl;
    cin>>x;

    cout<<isPalindrome(x);
    return 0;
}