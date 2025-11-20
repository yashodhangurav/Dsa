
// LeetCode 125 No.

#include<iostream>
#include <cstring>
using namespace std;


// O(n)
bool palindrom(char word[], int n){
    int st = 0, end = n-1;
    while(st <= end){                   //we take lesserthan and equals to means it will run good for odd characters length also
        if(word[st++] != word[end--]){
            cout<<"This word is not palindrome"<<endl;
            return false;
        }
    }
    return true;
}

int main(){
    char word[] = "we";

    cout<<palindrom(word, strlen(word));

    // cout<<word;
    return 0;
}