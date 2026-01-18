#include<iostream>
#include<vector>
using namespace std;

int gridWays(int r, int c, int n, int m, string path){
    if(r == n-1 && c == m-1){       //BC for destination cell
        cout<<path<<endl;
        return 1;
    }

    if(r >= n || c >= m){           //BC for out of bounds
        return 0;
    }

    // right
    int val1 = gridWays(r, c+1, n , m, path + 'R');

    // down
    int val2 = gridWays(r+1, c, n, m , path + 'D');

    return val1 + val2;
}


int main(){
    int n = 3, m = 3;

    string path = "";
    cout<<gridWays(0,0,n,m, path);        //Starting from (0,0) cell

    return 0;
}