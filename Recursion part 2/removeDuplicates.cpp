// asked in google and microsoft interviews
#include<iostream>
#include<string>
using namespace std;


void  removeDuplicates(string str, string newStr, int i, int map[26]){
    
    // Base case
    if(i == str.size()){
        cout<<newStr;
        return;
    }

    int mapIdx = (int)(str[i] - 'a');
    
    if(map[mapIdx] == false){
        map[mapIdx] = true;
        removeDuplicates(str, newStr + str[i], i+1, map);
    }else{
        removeDuplicates(str, newStr, i+1, map);
    }
    
}

int main(){
    string str= "yashodhannnnguiraaavvv";
    string newStr = "";
    int map[26] = {false};      //we created a map size of 26 for 26 characters of alphabet 

    removeDuplicates(str, newStr, 0 , map);

    return 0;
    
}