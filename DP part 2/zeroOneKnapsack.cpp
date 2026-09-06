#include<iostream>
#include<vector>
using namespace std;

int knapsackRec(vector<int> val, vector<int> wt, int W, int n){     //O(2^n)
    if(n == 0 || W == 0){
        return 0;
    }
    
    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if(itemWt <= W){
        //include
        int ans1 = knapsackRec(val,wt, W - itemWt, n-1) + itemVal;
        //exclude
        int ans2 = knapsackRec(val,wt, W, n-1);

        return max(ans1,ans2);

    }else{
        //exclude
        return knapsackRec(val,wt,W,n-1);
    }
}


int knapsackMemo(vector<int> val, vector<int> wt, int W, int n, vector<vector<int>> &dp){     //O(n*W)
    if(n == 0 || W == 0){
        return 0;
    }

    if(dp[n][W] != -1){
        return dp[n][W];
    }
    
    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if(itemWt <= W){
        //include
        int ans1 = knapsackMemo(val,wt, W - itemWt, n-1, dp) + itemVal;
        //exclude
        int ans2 = knapsackMemo(val,wt, W, n-1, dp);

        dp[n][W] = max(ans1,ans2);

    }else{
        //exclude
        dp[n][W] =  knapsackMemo(val,wt,W,n-1, dp);
    }

    return dp[n][W];
}


int knapsackTab(vector<int> val, vector<int> wt, int W, int n){     //O(n*W)

    vector<vector<int>> dpp(n+1, vector<int>(W+1, 0));

    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<W+1; j++){
            int itemWt = wt[i-1];
            int itemVal = val[i-1];

            if(itemWt <= j){
                dpp[i][j] = max(itemVal + dpp[i-1][j-itemWt], dpp[i-1][j]);
            }else{
                dpp[i][j] = dpp[i-1][j];
            }
        }
    }


    for(int i = 0; i<n+1; i++){
        for(int j = 0; j<W+1; j++){
            cout<<dpp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dpp[n][W];
}



int main(){

    vector<int> val = {15,14,10,45,30};
    vector<int> wt = {2,5,1,3,4};
    int W = 7;
    int n = 5;

    // vector<vector<int>> dp(n+1, vector<int>(W+1, -1));

    // cout<<knapsackMemo(val,wt,W,n, dp)<<endl;

    // // memo Array
    // cout<<"memo matrix : "<<endl;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<W; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<knapsackTab(val,wt,W,n)<<endl;

    return 0;
}