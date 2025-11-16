#include<iostream>
using namespace std;

void maxProfit(int *prices, int n){
    int bestbuy[100000];                                //dynamical array sizing is not posible in C++ so we take this array max size as mentioned in the quetion in 
    bestbuy[0] = INT_MAX;                              //initialized 0th index by INT_MAX
    // cout<<bestbuy[0]<<" ";
    for(int i = 1; i < n; i++){
        bestbuy[i] = min(bestbuy[i-1], prices[i-1]);    //comparing the bestbuy and prices array and denoting the min  value to the 
        // cout<<bestbuy[i]<<" ";
    }

    // profit calculating
    int maxProfit = 0;
    for(int i=0; i<n; i++ ){
        int currProfit = prices[i] - bestbuy[i];    //Profit = sellingPrice-buyingPrice
        maxProfit = max(maxProfit, currProfit);
    }
// time complexity is O(n)+O(n) = O(2n)= O(n) , becouse 
    cout<<"maxProfit is : "<<maxProfit<<endl;
}

int main(){
    int prices[6]={7,6,5,4,3,2};
    int n = sizeof(prices)/sizeof(int);
    
    maxProfit(prices, n);
    return 0;
}