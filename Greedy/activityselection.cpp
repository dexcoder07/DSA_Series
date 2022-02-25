#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){


    int n;
    cin >> n;


    vector<int> start;
    vector<int> end;


    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        start.push_back(x);
    }


    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        end.push_back(x);
    }

    vector<pair<int,int>> pr;

    for(int i = 0 ; i < n ; i++){
        pr.push_back(make_pair(start.at(i), end.at(i)));
    }


    sort(pr.begin(), pr.end(), comp);//, [&](pair<int, int> a, pair<int,int> b){
       // return a.second < b.second;
 //   });

    int counter = 1;
    int end_e = pr[0].second;


    for(int i = 1 ; i < n ; i++){

        if(pr[i].first >= end_e){
            counter++;
            end_e = pr[i].second;
        }
    }

    cout << counter;
    return 0;
}