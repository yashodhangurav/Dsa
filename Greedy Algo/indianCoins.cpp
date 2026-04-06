#include<iostream>
#include<vector>
using namespace std;

int getMinChange(vector<int> coins, int V){             //O(n) time complexity, O(1) space complexity
    int ans = 0;
    int n = coins.size();
 
    for(int i = n-1; i>= 0 && V>0; i--){
        if(coins[i]<=V){
            ans += V/coins[i];
            V = V%coins[i];                         //remainder
        }
    }
    cout<<"Minimum number of coins required is: "<<ans<<endl;
    return ans;
}

int main(){

    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};         //canonical values of coins in India
    int V = 1099;

    getMinChange(coins, V);

    return 0;
}