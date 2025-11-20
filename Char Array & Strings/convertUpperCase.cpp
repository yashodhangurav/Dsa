#include<iostream>
#include<cstring>
using namespace std;

void upperCase( char word[], int n){
    for(int i = 0; i<n; i++){
        char ch = word[i];
        if(ch>='A' && ch<='Z'){
            continue;               //continue keyword skip the operation
        }else{
            word[i] = ch - 'a' + 'A';   //finding the position of the perticular Charater by deleting lower case 'a' and adding 'A' to make it Uppercase and assigning in word[i]
        }
    }
}

void toLower(char word[], int n){
    for(int i = 0; i<n; i++){
        char ch = word[i];
        if(ch >= 'a' && ch<= 'z'){
            continue;
        }else{
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main(){

    char word[] = "ApPle";
    // upperCase(word, strlen(word));
    toLower(word,strlen(word));
    cout<<word<<endl;
    return 0;
}