#include<iostream>
#include<vector>
using namespace std;

// void swapString(string str1,string str2){
//     for(int i = 0; i<str1.length(); i++){
//         for(int j = 0; j<i; j++){
//             if(str1[i] == str2[j]){
//                 continue;
//             }else if(str1[i] != str2[j]){

//             }
//         }
//     }
// };

int swapString(string str1, string str2){
    if(str1 == str2){
        cout<<"True";
        return 1;
    };

    vector<int> idxs;               //in this we are store the idx at which both the string are diferent

    for(int i = 0; i<str1.length(); i++){
        if(str1[i]!=str2[i]){
            // store the idx at which both the string are diferent
            idxs.push_back(i);
        }
    }

    if(idxs.size() == 2){
        int i = idxs[0];
        int j = idxs[1];

        if(str1[i] == str2[j] && str1[j] == str2[i]){
            cout<<"True";
        }else{
            cout<<"False";
        }
    }else{                                      //swaping is not possibkle
        cout<<"False"<<endl;
    }
    return false;
};

int main(){
    string str1 = "bani";
    string str2 = "kanb";

    swapString(str1,str2);
    
    return 0;
}