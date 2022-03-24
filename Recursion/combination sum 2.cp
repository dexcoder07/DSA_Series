#include<bits/stdc++.h>
using namespace std;

void combination(vector<int> &arr, int idx, int target,  vector<int> &ds, set<vector<int>> &vec){
        
        if(target == 0){
            vec.insert(ds);
            return;
        }
        
        if(idx == arr.size()){
            return;
        }
        
        if(target >= arr[idx]){
            ds.push_back(arr[idx]);
            combination(arr, idx+1, target - arr[idx], ds, vec);
            ds.pop_back();
            combination(arr, idx+1, target, ds, vec);
        }
        
        
    }
    

    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        set<vector<int>> vec;
        vector<vector<int>> ans;
        
        vector<int> ds;
        
        combination(candidates, 0, target, ds, vec);
        
        for(auto it : vec){
            ans.push_back(it);
        }
        
        return ans;
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

    int target;
    cin >> target;

    //vector<int> ds;
    vector<vector<int>> ans;

    ans = combinationSum2(vec,target);


    for(auto it : ans){
        for(auto jt : it){
            cout << jt <<  " ";
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}