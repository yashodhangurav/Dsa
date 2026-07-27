// #include<iostream>
// #include<vector>
// #include<unordered_set>
// #include<string>
// using namespace std;


// // we need to find the starting point , (It is present in FROM but not in the TO)

// void itinerary(vector<string> from, vector<string> to){
//     unordered_set<string> s;

//     for(string city : to){
//         s.insert(city);
//     }
//     for(string city : from){
//         if(s.find(city) == s.end()){
//             cout<<city<<" ";
//         }
//     }
// }

// int main(){

//     vector<string> from = {"chennai", "mumbei", "goa", "delhi"};
//     vector<string> to = {"bengaluru", "delhi", "chennai", "goa"};
//     itinerary(from,to);


//     return 0;
// }


// ------------------------------------------------------------------------------


#include<iostream>
#include<vector>
#include<unordered_set>
#include<string>
#include<unordered_map>
using namespace std;


// we need to find the starting point , (It is present in FROM but not in the TO)

void itinerary(unordered_map<string, string> tickets){
    // starting point
    unordered_set<string> to;

    for(pair<string, string> ticket: tickets){  //from,to
        to.insert(ticket.second);
    }
    string start = "";
    for(pair<string,string> ticket: tickets){
        if(to.find(ticket.first) == to.end()){
            start = ticket.first;
        }
    }

    // plan
    cout<<start<<" -> ";
    while(tickets.count(start)){
        cout<<tickets[start]<<" -> ";       //destination
        start = tickets[start];             //updating start as destination
    }
    cout<<"destination\n";
}

int main(){

    
    unordered_map<string, string> tickets;
    tickets["chennai"] = "bengaluru";
    tickets["mumbai"] = "delhi";
    tickets["goa"] = "chennai";
    tickets["delhi"] = "goa";
    itinerary(tickets);

    return 0;
}