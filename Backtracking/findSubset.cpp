#include<iostream>
#include<vector>
using namespace std;

void printSubset(string str, string subset){
    int n = str.size();

    if(str.size() == 0){                        //base case
        cout<<subset<<"\n";
        return;
    }

    char ch = str[0];

    // yes choice
    printSubset(str.substr(1, n-1), subset + ch);       //including the first character in subset
    // no choice
    printSubset(str.substr(1, n-1), subset);            //removing the first character and keeping the subset same
}

int main(){

    string str = "abc";
    string subset = "";

    printSubset(str, subset);

    return 0;
}