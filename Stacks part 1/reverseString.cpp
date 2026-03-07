#include<iostream>
#include<stack>
#include<string>
using namespace std;


string reverseString(string str){           //O(n) time complexity and O(n) space complexity (because we need to prepare the stack of string size)
    string ans;
    stack<char> s;

    for(int i = 0; i<str.size(); i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    return ans;
}

int main(){
    string str = "yash";
    cout<<reverseString(str);


    return 0;
}