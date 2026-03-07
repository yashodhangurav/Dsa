#include<iostream>
#include<stack>
using namespace std;

bool isDuplicate(string str){
    stack<char> s;

    for(int i =0; i<str.size(); i++){
        char ch = str[i];

        if(ch != ')'){          //non-Closing
            s.push(ch);         //is upcoming char is not closing then push into the stack
        }
        else{
            if(s.top() == '('){
                return true;       //DUPLICATE
            }

            while(s.top() != '('){
                    s.pop();
            }
            
            s.pop();
        }   
    }

    return false;
};

int main(){
    string str1 = "((a+b))";    //valid : true (Duplicate existing) = 1
    string str2 = "((a+b)+(c+d))"; //invalid : false = 0

    cout<<isDuplicate(str1)<<endl;
    cout<<isDuplicate(str2)<<endl;

    return 0;
}