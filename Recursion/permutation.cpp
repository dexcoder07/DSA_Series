#include<bits/stdc++.h>
using namespace std;


void permutation(vector<int> &arr, int freq[], vector<int> &ds, vector<vector<int>> &ans){

    if(ds.size() == arr.size()){
        ans.push_back(ds);
        return;
    }

    for(int i = 0 ; i < arr.size() ; i++){
        if(!freq[i]){
            ds.push_back(arr[i]);
            freq[i] = 1;
            permutation(arr, freq, ds, ans);
            ds.pop_back();
            freq[i] = 0;
        }
    }

}


vector<vector<int>> mainfun(vector<int> &nums){

    vector<vector<int>> ans;

    vector<int> ds;

    int freq[nums.size()];

    memset(freq, 0, sizeof freq);

    permutation(nums, freq, ds, ans);

    return ans;
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

    vector<vector<int>> sts = mainfun(arr);

    for(auto it : sts){
        for(auto jt : it){
            cout << jt << " ";
        }
        cout << endl;
    }

    return 0;
}