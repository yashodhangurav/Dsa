#include<iostream>
#include<string>
using namespace std;

int vowelsCount(string str){

    int vowelsCount = 0;

    for(int i = 0; i< str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowelsCount++;
        }
    }
    cout<<vowelsCount<<endl;
    return vowelsCount;
}

int main(){
    string str;
    cout<<"Enter the any string: "<<endl;
    getline(cin,str);
    
    vowelsCount(str);

    return 0;
}