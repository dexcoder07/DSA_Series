#include<bits/stdc++.h>
using namespace std;


void subset(vector<int> &arr, int idx, int sum, int n, vector<int> &ans){

    if(idx == n){
        ans.push_back(sum);
        return;
    }

    sum += arr[idx];
    subset(arr, idx+1, sum, n, ans);
    sum -= arr[idx];
    subset(arr, idx+1, sum, n, ans);
}


int main(){


    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<int> ans;
    subset(arr, 0, 0, arr.size(), ans);

    sort(ans.begin(), ans.end());
    for(auto it : ans){
        cout << it << " ";
    }


    return 0;
}