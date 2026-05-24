#include<iostream>
#include<set>
using namespace std;


int main(){
    set<int> s;

    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);
    s.insert(25);
    s.insert(25);
    s.insert(25);

    s.insert(5); // duplicate element, will not be added
    cout<<s.size()<<endl;

    s.erase(10);

    if(s.find(10) != s.end()){
        cout<<"10 is exists in the set"<<endl;
    }else{
        cout<<"10 is not exists"<<endl;
    }

    for(auto el: s){
        cout<<el<<" ";
    }
    
    return 0;
}