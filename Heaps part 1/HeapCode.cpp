#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Heap{
    vector<int> v;
    public:
        void push(int val){
            // step1
            v.push_back(val);
            // step2
            int x = v.size()-1;         // x is the index of the newly added element
            int prt = (x-1)/2;          // parent index

            while(prt >=0  && v[prt] < v[x]){
                swap(v[prt], v[x]);
                x = prt;
                prt = (x-1)/2;
            }

        }


        void heapify(int i){    // i = parent
            if(i >= v.size()){
                return;
            }

            int left = 2*1 + 1;
            int right = 2*i + 2;

            int maxi = i;  // assume parent is maximum
            if(left < v.size() && v[left] > v[maxi]){
                maxi = left;
            }
            if(right < v.size() && v[right] > v[maxi]){
                maxi = right;
            }

            swap(v[i], v[maxi]);
            if(maxi != i){
                heapify(maxi);
            }
        }

        void pop(){
            // step1: swap the first and last element
            swap(v[0], v[v.size()-1]);
            // step2: remove the last element
            v.pop_back();
            // step3: heapify
            heapify(0);
        }
        int top(){
           return v[0];
        }
        bool empty(){
            return v.size() == 0;
        }
};

int main(){
    Heap h;
    h.push(5);
    h.push(2);
    h.push(8);
    h.push(1);

    cout<<"top : "<<h.top()<<endl;  
    
    h.pop();
    cout<<"top : "<<h.top()<<endl;  


    return 0;

}