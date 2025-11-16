// leetcode 258 question number sum of digit untill it become a singkle digit

#include<iostream>
using namespace std;

int sumOfDig(int num){
    int sum = 0;
    while(num>0){
        int lastDig = num%10;
        sum+=lastDig;
        num /= 10;
    }
    return sum;
};

void addDigits(int num){
    int sum = 0;
    while(num>9){
        sum = sumOfDig(num);
        num = sum;
    }
    cout<<sum;
}


int main(){
    int n;
    cin>>n;
    addDigits(n);
   
    return 0;
}