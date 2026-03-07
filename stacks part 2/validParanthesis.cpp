#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

bool validParanthesis(string str){      //O(n) & O(n)

    stack<char> s;

    for(int i =0; i<str.size(); i++){
       char ch = str[i];
       
       if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
       }else{                                       //closing
            if(s.empty()){
                return false;
            }

            // matching
            char top = s.top();
            if( (ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[') ){
                s.pop();
                
            }else{
                cout<<"invalid paranthesis"<<endl;
                return false;
            }
       }
    }   

    if(s.empty()){
        cout<<"valid paranthesis"<<endl;
        return true;
    }else{
        cout<<"invalid paranthesis"<<endl;
        return false;
    }
};


int main(){
    string str1 = "([]{}";
    string str2 = "([]{})";

    validParanthesis(str1);
    validParanthesis(str2);

    return 0;
}