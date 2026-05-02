#include<iostream>
#include<map>
#include<string>
using namespace std;



int main(){
    map<int, string> m;

    m[100] = "yashodhan";
    m[101] = "sanika";
    m[102] = "saish";
    m[105] = "yashodhan";

    cout<<m[100]<<endl;
    cout<<m[105]<<endl;


    cout<<m.count(100)<<endl;   // it will return 1 if the key is present in the map, otherwise it will return 0
    
    for(auto it: m){
        cout<<"key= "<<it.first<<" value= "<<it.second<<endl;
    }


    for(auto it: m){
        cout<<"double of key= "<<it.first * 2<<endl;
    }
    return 0;
}