#include<bits/stdc++.h>
using namespace std;

struct Job
{
    /* data */
    int id;
    int dead;
    int profit;
};


class Solution{

public:

    static bool comp(Job a, Job &b){

        return a.profit > b.profit;
    }


    vector<int> JobScheduling(Job arr[], int n){

        sort(arr, arr+n, comp);
        vector<int> ans;

    int sizex = 0;

    for(int i = 0 ; i < n ; i++){
        sizex = max(sizex, arr[i].dead);
    }

    //cout << sizex;
    int n_jobs = 0, max_profit = 0;
    int hash[sizex+1];
    memset(hash, -1, sizeof hash);

    for(int i = 0 ; i < n ; i++){
        for(int j = arr[i].dead ; j != 0 ; j--){
            if(hash[j] == -1){
                hash[j] = arr[i].dead;
                n_jobs++;
                max_profit += arr[i].profit;
                break;
            }
        }
    }
    ans.push_back(n_jobs);
    ans.push_back(max_profit);
        return ans;
    }
};


int main(){

    int n;
    cin >> n;

    Job arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i].id;
        cin >> arr[i].dead;
        cin >> arr[i].profit;
    }

    Solution obj;

    vector<int> ans = obj.JobScheduling(arr, n);
    cout << ans[0] << " " << ans[1];

    return 0;
}