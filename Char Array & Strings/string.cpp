#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "hello";
    string name;


    // for(int i = 0; i<str.length(); i++){
    //     cout<<str[i]<<" ";
    // }

    for(char ch : str){
        cout<<ch<<", ";
    }


    
    cout<<"Enter your name: ",getline(cin, name);

    cout<<name<<"";
    cout<<str;
    return 0;
}