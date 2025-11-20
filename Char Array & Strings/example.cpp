#include<iostream>
using namespace std;
#include <cstring>


int  main(){

    // char ch = 'A';
    // cout<<(int) ch<<endl;

    // // finding the position of the charaters
    // char ch1 = 'f';             // f is on the 5th index of the alphabet 
    // int pos = ch1 - 'a'; 

    // cout<<pos<<endl;

    // // character Array
    // char str[6] = {'a','b', 'c', 'd', 'e', '\0'};
    // int n = sizeof(str)/sizeof(char);

    // for(int i =0; i<n; i++){
    //     cout<<str[i]<<" ";
    // }
    // cout<<endl;

    // cout<< str<<endl;       //when we print the name of the charater array it will give the all the values present in the array not a memory address of first element just like a integer array
    

    // // char array creation ways
    // char work[50] = {'c','o','d','e','\0'};
    // char work2[] = "code";
    // cout<<work<<endl;

    // cout<<strlen(work)<<" ";    //printing length of the char array


    // taking input character as a string
    // char word[10];
    // cin>>word;      //ignore white spaces
    // cout<<"Your word was : "<<word<<endl;
    // cout<<"length of your word is  : "<<strlen(word)<<endl;
    
    // cin.getline
    char sentence[50];
    cin.getline(sentence,50, '.');  // '.' is delimiter and it is optional

    cout<<"your line is : "<<sentence<<endl;
    cout<<"length of your line is :"<<strlen(sentence)<<endl;
    return 0;
}