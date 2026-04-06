#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Job{
    public:
        int idx;
        int deadline;
        int profit;

        Job(int idx, int deadline, int profit){
            this->idx = idx;
            this->deadline = deadline;
            this->profit = profit;
        }
};



void jobSequencing(vector<pair<int,int>> pair){
    vector<Job> jobs;                               //vectors of objects
    int n = pair.size();

    for(int i = 0; i<n; i++){
        jobs.emplace_back(i, pair[i].first, pair[i].second);
    }

    sort(jobs.begin(), jobs.end(), [](Job &a, Job &b){     //sorting the vector of objects
        return a.profit > b.profit;
    });

    cout<<"Selecting \njob: "<<jobs[0].idx<<endl;

    int profit = jobs[0].profit;
    int safeDeadline = 2;
    
    for(int i = 1; i<n; i++){
        if(jobs[i].deadline >= safeDeadline){
            cout<<"Job: "<<jobs[i].idx<<endl;
            profit += jobs[i].profit;
            safeDeadline++;
           
        }
    }

        cout<<"Total Profit: "<<profit<<endl;

};



int main(){
    vector<pair<int,int>> jobs(4, make_pair(0,0));
    jobs[0] = make_pair(4,40);
    jobs[1] = make_pair(1,30);
    jobs[2] = make_pair(1,20);
    jobs[3] = make_pair(1,10);


    jobSequencing(jobs);
    return 0;
}