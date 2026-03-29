#include<iostream>
#include<queue>
using namespace std;

void interleaveQueue(queue<int>&org){
    int n = org.size();
    queue<int> firstHalf;

    for(int i = 0; i<(n/2); i++){
        firstHalf.push(org.front());
        org.pop();
    }

    // interleave 

    while(!firstHalf.empty()){
        org.push(firstHalf.front());
        firstHalf.pop();

        org.push(org.front());
        org.pop();
    }

}

int main(){
    queue<int> org;

    for(int i = 1; i<=10; i++){
        org.push(i);
    }

    interleaveQueue(org);

    for(int i = 0; i<10; i++){
        cout<<org.front()<<" ";
        org.pop();
    }

    

    return 0;
}