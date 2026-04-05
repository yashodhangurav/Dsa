#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
    vector<pair<int,int>> P = {{5, 24}, {39,60}, {5, 28}, {27, 40}, {50, 90}};


    sort(P.begin(), P.end(), compare);

    // for(int i = 0; i<P.size(); i++){
    //     cout<<P[i].first<<" "<<P[i].second<<endl;
    // }

    int count = 1;
    int last = P[0].second;
    for(int i = 1; i<P.size(); i++){
        if(P[i].first> last){
            count++;
            last = P[i].second;
        }
    }

    cout<<"total number of pairs / max Length chain of pairs :"<< count <<endl;


    return 0;
}