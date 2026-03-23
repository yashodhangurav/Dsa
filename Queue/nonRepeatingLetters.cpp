#include<iostream>
#include<queue>
using namespace std;

void nonRepeating(string str){      //O(n)
    int freq[26] = {0};
    queue<char> Q;

    for(int i = 0; i<str.size(); i++){
        char ch = str[i];
        Q.push(ch);
        freq[ch - 'a']++;

        while(!Q.empty() && freq[Q.front() - 'a']>1){
            Q.pop();
        }

        if(Q.empty()){
            cout<<"-1\n";
        }else{
            cout<<Q.front()<<endl;
        }
    }
};

int main(){
    string a = "yaahhyv";
    nonRepeating(a);

    return 0;
}