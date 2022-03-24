#include<bits/stdc++.h>
using namespace std;


void combination(int idx, int target, vector<int>& arr, vector<vector<int>>& vec, vector<int> &ds){


    if(target == 0){
        vec.push_back(ds);
        return;
    }

    if(idx == arr.size()){
        return;
    }

    //if target is less than current element as we need to insert the current element to make target reach 0;
    if(arr[idx] <= target){
        ds.push_back(arr[idx]);
        combination(idx, target - arr[idx], arr, vec, ds);
        ds.pop_back();
    }
    combination(idx+1, target, arr, vec, ds);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // for(auto it : arr)
    // {
    //     cout << it << " ";
    // }

    int target = 0;
    cin >> target;

    vector<vector<int>> vec;
    vector<int> ds;


    combination(0, target, arr, vec, ds);

    for(auto it : vec){
        for(auto jt : it){
            cout << jt << " ";
        }
        cout << endl;
    }
    return 0;
}