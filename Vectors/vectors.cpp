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

    // vector<int> vec2 = {1,2,5,7,6};
    // cout<<"size: "<<vec2.size()<<endl;
    // cout<<"capacity: "<<vec2.capacity()<<endl;

    // vec2.push_back(5);
    // cout<<"size: "<<vec2.size()<<endl;
    // cout<<"capacity: "<<vec2.capacity()<<endl;
    

    // // vector display
    // for(int i = 0; i<vec2.size(); i++){
    //     cout<<vec2[i]<<" ";
    // }

    // // adding new elements dynamically
    // cout<<endl;

    // int n;
    // cout<<"Enter how many elements u want to add: "<<endl;
    // cin>>n;
    // for(int i = 0; i<n; i++){
    //     int x;
    //     cout<<"enter element: ";
    //     cin>>x;
    //     vec2.push_back(x);
    // }
    //  // vector display
    //  for(int i = 0; i<vec2.size(); i++){
    //     cout<<vec2[i]<<" ";
    // }

    // ------------------------------------practice session

    vector<int> nums;

    for(int i = 0; i<5; i++){
        nums.push_back(i);
    }

    // for(int i = 0; i<5; i++){
    //     cout<<nums[i]<<" ";
    // }

    while(nums.size() != 0){
        cout<<nums.back()<<" ";
        nums.pop_back();
    }
    return 0;
}