#include<iostream>
#include<vector>
#include<unordered_set>
#include<string>
using namespace std;


// we need to find the starting point , (It is present in FROM but not in the TO)

void itinerary(vector<string> from, vector<string> to){
    unordered_set<string> s;

    for(string city : to){
        s.insert(city);
    }
    for(string city : from){
        if(s.find(city) == s.end()){
            cout<<city<<" ";
        }
    }
}

int main(){

    vector<string> from = {"chennai", "mumbei", "goa", "delhi"};
    vector<string> to = {"bengaluru", "delhi", "chennai", "goa"};
    itinerary(from,to);


    return 0;
}