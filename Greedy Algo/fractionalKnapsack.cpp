/* fractional items means we can take such items which are not fully taken
 but we can take some part of it also. So we will take the item with maximum value/weight ratio 
 first and then we will take the next item with maximum value/weight ratio and so on 
 until we have capacity left in our knapsack. This is a greedy approach 
 because we are taking the item with maximum value/weight ratio first without considering the future consequences.*/

//  Time Complexity: O(nlogn) -> sorting the ratio in descending order

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<double, int> p1, pair<double, int> p2){   
    return p1.first > p2.first;                                          // sort in descending order according to the ratio
}

int fractionalKnapsack(vector<int> val, vector<int> wt, int W){
    int n = val.size();
    vector<pair<double, int>> ratio(n, make_pair(0.0, 0));              //pair(ratio , idx) -> (double, int)

    for(int i = 0; i<n; i++){
       double r = (double)val[i]/wt[i];
       ratio[i] = make_pair(r,i);
    }

    sort(ratio.begin(), ratio.end(), compare);  // sort the ratio in descending order O(nlogn)

    int ans = 0;
    for(int i = 0; i<n; i++){
       int idx = ratio[i].second;           // get the index of the item with maximum ratio
       if(wt[idx] < W){
            ans += val[idx];
            W -= wt[idx];
       }else{
            ans += ratio[i].first * W;      // val = (ratio * remaining weight in knapsack) , take the fraction of the item that can fit in the remaining capacity of the knapsack
            W = 0;                          // we have filled the knapsack to its capacity, so we can break out of the loop
            break;
        }
    }

    cout<<"Maximun value in Knapsack = "<<ans<<endl;
    return ans;
}

int main(){
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 50;

    fractionalKnapsack(val, wt, W);
    
    return 0;
}