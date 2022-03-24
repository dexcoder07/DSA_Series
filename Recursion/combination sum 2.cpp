#include<bits/stdc++.h>
using namespace std;

//This approach will find all the subsets and uniqe subsets are find using set.
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
    
//This approach will find only the unique subsets.
void findCombination(int ind, int target, vector<int> & arr, vector <vector<int>> &ans,vector<int>& ds) {
        
        if(target == 0){
            ans.push_back(ds);
        return;
        }
        
        for (int i = ind; i < arr.size(); i++){
           if (i > ind && arr[i] == arr[i - 1]) continue;
            if (arr[i] > target) break;
            ds.push_back(arr[i]);
            findCombination(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        
        vector < vector < int >> ans;
        vector < int > ds;
        
        findCombination(0, target, candidates, ans, ds);
        return ans;
    }}

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