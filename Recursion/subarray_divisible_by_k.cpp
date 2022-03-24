#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> &arr, int n, int k, int idx, int sum,int &counter, vector<int> &ans){

    if(idx == n){
        if(sum != 0 && (sum % k == 0)){
            counter++;
            for(auto it : ans){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    ans.push_back(arr[idx]);
    sum += arr[idx];
    fun(arr, n, k, idx+1, sum, counter, ans);
    ans.pop_back(); 
    sum -= arr[idx];
    fun(arr, n, k, idx+1, sum, counter, ans);
}

int subArrayCount(vector<int> &arr, int k){

    int counter = 0;
    vector<int> ans;
    fun(arr, arr.size(), k, 0, 0, counter, ans);

    return counter;
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int k;
        cin >> k;

        vector<int> arr;

        for(int i = 0 ; i < n ; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        
        cout << subArrayCount(arr, k);
        cout<< endl;
    }

	return 0;
}