#include<iostream>
#include<vector>
using namespace std;


void permutations(string str, string ans){

    int n = str.size();

    if(n == 0){
        cout<<ans<<"\n";
        return;
    }

    // Loop through all characters
    for(int i = 0; i<str.size(); i++){
        char ch = str[i];
        string newStr = str.substr(0, i) + str.substr(i+1, n-i-1);      //removeing ith character from string and  passing the remaining string
        permutations(newStr, ans + ch);
    }
}


int main(){
    string str = "abc";
    string ans = "";

    permutations(str, ans);
    return 0;
}