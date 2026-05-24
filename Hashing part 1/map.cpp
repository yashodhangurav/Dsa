#include<iostream>
// #include<unordered_map>
#include<map>
using namespace std;


int main(){
    map<string, int> m;

    m["india"] = 150;
    m["china"] = 200;
    m["US"] = 50;
    m["UK"] = 30;


    for(pair<string, int> country : m){
        cout<<country.first<<", "<<country.second<<endl;
    }
cout<<"--------------------------------------"<<endl;

    // earase func
    m.erase("UK");

     for(pair<string, int> country : m){
        cout<<country.first<<", "<<country.second<<endl;
    }

    // count func
    if(m["nepal"]){
        cout<<"nepal is present"<<endl;
    }else{
        cout<<"nepal is not present"<<endl;
    }

    return 0;
}