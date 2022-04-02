#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int> &nums, int target);

int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int n;
    cin >> n;

    int t;
    cin >> t;

    vector<int> nums;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    // vector<int> ans = 
    twoSum(nums, t);

    // for(auto it : ans){
    //     cout << it << " ";
    // }

    return 0;
}


void twoSum(vector<int>& nums, int target) {
        
        vector<int> vec;
        unordered_map<int,int> mpp;
        
        for(int i = 0; i < nums.size() ; i++){
            mpp[nums[i]] = i;
        }
        
        sort(nums.begin(), nums.end());
        
        int ptr1 = 0;
        int ptr2 = nums.size() - 1;
        
        while(ptr1 < ptr2){
            if(nums[ptr1] + nums[ptr2] == target){
                vec.push_back(mpp[nums[ptr1]]);
                vec.push_back(mpp[nums[ptr2]]);
                break;
            }
        }
        
        for(auto it : vec){
            cout << it << " ";
        }
    }



