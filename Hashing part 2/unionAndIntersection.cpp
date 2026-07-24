#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void getUnion(vector<int> arr1, vector<int> arr2){
    unordered_set<int> s;
    for(int i = 0; i<arr1.size(); i++){
        s.insert(arr1[i]);
    }
    for(int i = 0; i<arr2.size(); i++){
        s.insert(arr2[i]);
    }

    cout<<"union: ";
    for( int el : s){
        cout<< el <<" ";
    }
    cout<<endl;
}

void getIntersection(vector<int> arr1, vector<int> arr2){
    unordered_set<int> s;

    cout<<"Intersection: ";
    for(int el : arr1){
        s.insert(el);
    }
    for(int el : arr2){
        if(s.find(el) != s.end()){      //if el if found
            cout<<el<<" ";
            s.erase(el);
        }
    }
    cout<<endl;
}
int main(){
    vector<int> arr1 = {7,4,5,7,5,9,6};
    vector<int> arr2 = {7,9,5,3};

    getUnion(arr1,arr2);

    getIntersection(arr1,arr2);

    return 0;
}