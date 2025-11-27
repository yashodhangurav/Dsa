#include<iostream>
#include<vector>

using namespace std;



int main(){
    // vector<int> vec1;
    // cout<<vec1.size()<<"\n";

    // vector<int> vec2 = {1,2,5,7,6};

    // vector<int> vec3(10,-1);

    // for(int i = 0; i<vec3.size(); i++){
    //     cout<<vec3[i]<<" ";
    // }

    vector<int> vec2 = {1,2,5,7,6};
    cout<<"size: "<<vec2.size()<<endl;
    cout<<"capacity: "<<vec2.capacity()<<endl;

    vec2.push_back(5);
    cout<<"size: "<<vec2.size()<<endl;
    cout<<"capacity: "<<vec2.capacity()<<endl;
    
    return 0;
}