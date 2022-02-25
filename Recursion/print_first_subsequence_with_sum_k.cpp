#include<bits/stdc++.h>
using namespace std;

bool firstCount(vector<int> &arr, int idx, int sum, int s, int n, vector<int> &ans){
    
    if(idx == n){
        if(s == sum){
            for(auto it : ans)
                cout << it <<  " ";
            return true;
        }
        else{
            return false;
        }
    }
    
    ans.push_back(arr[idx]);
    s += arr[idx];
    
    if(firstCount(arr, idx+1, sum, s, n, ans) == true){
        return true;
    }
    
    ans.pop_back();
    s -= arr[idx];
    
    if(firstCount(arr, idx+1, sum, s, n, ans) == true){
        return true;
    }
    
    return false;
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n;
    cin >>n;

    std::vector<int> arr;

    for(int i = 0 ; i < n ; i++){
    	int x;
    	cin >> x;
    	arr.push_back(x);
    }

    int sum ;
    cin >> sum;

    vector<int> ans;
    
    firstCount(arr, 0, sum, 0, n, ans);

	return 0;
}