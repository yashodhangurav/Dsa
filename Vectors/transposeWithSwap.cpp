// this only applys for square matrix

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix){
    int n = matrix.size();      // rows = cols for square matrix

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    return matrix;
}

int main(){
    vector<vector<int>> mat = {
        {2, 4, -1},
        {-10, 5, 11},
        {18, -7, 6}
    };

    vector<vector<int>> result = transpose(mat);

    // print result
    for(auto row : result){
        for(auto val : row){
            cout << val << "  ";
        }
        cout << endl;
    }
    return 0;
}
