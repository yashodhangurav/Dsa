#include<iostream>
#include<vector>
#include<string>
using namespace std;


// --------------------Recursion-------------------------

int catalanRec(int n){                                      //O(2^n)
    if(n == 0 || n == 1){
        return 1;
    }

    int ans = 0;

    for(int i = 0; i<n; i++){
        ans += catalanRec(i)*catalanRec(n-i-1);
    }
    return ans;
}


//-----------------Memoization-----------------------------

int catalanMemo(int n, vector<int> &dp){                    //O(n^2)
    if(n == 0 || n ==1){
        return 1;
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans += catalanMemo(i,dp)*catalanMemo(n-i-1,dp);
    }
    return dp[n] = ans;
}

//-----------------T^abulation-----------------------------

int catalanTab(int n){
    vector<int> dp(n+1, 0);
    dp[0] = dp[1] = 1;

    for(int i =2; i<n+1; i++){
        for(int j = 0; j<i; j++){
            dp[i] += dp[j] * dp[i-j-1]; 
        }
    }
    return dp[n];
}

int main(){

    int n = 4;

    vector<int> dp(n+1, -1);
    
    cout<<catalanTab(n)<<endl;

    return 0;
}