#include<iostream>
using namespace std;

int validString(string s){

    int n = s.size();

    if( n <=  1){
        return n;
    }

    int count = 0;
    if(s[0] == s[n-1]){                 //if first and last character are same then we will increment count by 1
        count++;
    }

    count += validString(s.substr(0, n-1)); // substring from index 0 to n-2
    count += validString(s.substr(1));      // here we are passing substring from index 1 to n-1
    count -= validString(s.substr(1, n-2)); // removing the first and last character

    return count;
}

int main(){
    string s = "abca";
    int count = validString(s);

    cout<<count<<endl;
    return 0;
}