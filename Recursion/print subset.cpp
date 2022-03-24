#include<bits/stdc++.h>
using namespace std;

void printSubset(vector<int> &vec, int idx, vector<vector<int>> &ans, vector<int> &ds){

    if(idx == vec.size()){
        ans.push_back(ds);
        return;
    }

    ds.push_back(vec[idx]);
    printSubset(vec, idx+1, ans, ds);

    ds.pop_back();
    printSubset(vec, idx+1, ans, ds);
}


int main(){


    int n;
    cin >> n;

    vector<int> vec;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }

    vector<int> ds;
    vector<vector<int>> ans;

    printSubset(vec,0, ans, ds);


    for(auto it : ans){
        for(auto jt : it){
            cout << jt <<  " ";
        }
        cout << endl;
    }

    return 0;
}