#include<iostream>
using namespace std;


void binStrings(int n, int lastPlace, string ans){
    // base case:
    if(n == 0){
        cout<<ans<<endl;
        return;
    }
    
    if(lastPlace != 1){
        binStrings(n-1, 0, ans + '0');          //we lastPlace is 0 we can add 0 or 1
        binStrings(n-1, 1, ans + '1');
    }else{
        binStrings(n-1, 0, ans +'0');          //we lastPlace is 1 we can only add 0(becouse consicative)
    }
}

int main(){

    string str = "";
    int n;

    binStrings(2, 0, str);

    return 0;
}