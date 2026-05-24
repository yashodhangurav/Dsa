#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    unordered_set<int> s;

    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);

    s.insert(5); // duplicate element, will not be added
    cout<<s.size()<<endl;

    if(s.find(10) != s.end()){
        cout<<"10 is present in the set"<<endl;
    }else{
        cout<<"10 is not present in the set"<<endl;
    }

    for(auto el: s){
        cout<<el<<" ";
    }
    
    return 0;
}