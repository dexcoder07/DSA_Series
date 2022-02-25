#include<bits/stdc++.h>
using namespace std;

void subSequence(vector<int> &arr, int idx, vector<int> &ans){

    if(idx >= arr.size()){
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    ans.push_back(arr[idx]);
    subSequence(arr, idx+1, ans);

    ans.pop_back();
    subSequence(arr, idx+1, ans);
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<int> ans;

    subSequence(arr, 0, ans);
	return 0;
}