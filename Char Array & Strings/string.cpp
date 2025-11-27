#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "I love coding in C++ and Java, i dont like python";
    string name;

    // ----------loops
    // for(int i = 0; i<str.length(); i++){ //this loop we used to access perticular element
    //     cout<<str[i]<<" ";
    // }

    // ----------or

    // for(char ch : str){  //this loop is used when we want just iteration
    //     cout<<ch<<", ";
    // }

    // ---------------member functions
    cout<<str.at(7)<<endl;    //same as cout<<str[7];
    cout<<str.substr(7,4)<<endl;    //.substr(starting index , size of substr);
    cout<<str.find("C++",25)<<endl; //we can also give the starting index here we are giving 25, so it will find from 25th index

    // cout<<"Enter your name: ", getline(cin, name); //by using this we can take whole line from a user

    // cout<<name<<"";
    // cout<<str;




    return 0;
}