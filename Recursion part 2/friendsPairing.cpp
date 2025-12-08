// appeared in GOLDMEN SACHS Interview 

#include<iostream>
using namespace std;


int friendPairings(int n){
    // Base case
    if(n == 1 || n == 2){
        return n;
    }

    // case 1 : when the nth friend remains single
    int single = friendPairings(n-1);
    // case 2 : when the nth friend pairs up with any of the (n-1) friends
    int pari = friendPairings(n-2) * (n-1);

    return single + pari;
}


int main(){

    int n = 3;
    cout<<friendPairings(n);

    return 0;
}