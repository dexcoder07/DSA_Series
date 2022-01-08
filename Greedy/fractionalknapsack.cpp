#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,int> a, pair<int,int> b){

    double r1 = double(a.first) / double(a.second);
    double r2 = double(b.first) / double(b.second);

    return r1 > r2;
}



int main(){

    int n;
    cin >> n;
    int W;
    cin >> W;

    vector<pair<int,int>> pr;
    
    for(int i = 0 ; i < n ; i++){
        int u, v;
        cin >> u >> v;
        pr.push_back(make_pair(u, v));
    }

    sort(pr.begin(), pr.end(), comp);

    double currWt = 0;
    double value = 0;

    for(int i = 0 ; i < n ; i++){
        if(currWt + pr[i].second <= W){
            currWt += pr[i].second;
            value +=pr[i].first;
        }
        else{
            int rem = W - pr[i].second;
            value += (double(pr[i].first) / double(pr[i].second) * rem);
            break;
        }
    }

    cout << value;
    return 0;
}