#include<bits/stdc++.h>
using namespace std;


void fun(int n, int idx, vector<int> &ds, vector<vector<int>> &ans){

    //base case
    if(n == idx){
        ans.push_back(ds);
        return ;
    }

    for(int i = 1 ; i <= n ; i++){
        fun(n, i, ds, ans);
    }
}
vector<vector<int>> combine(int n, int k){

    vector<int> ds;
    vector<vector<int>> ans;

    fun(n, 1, ds, ans);

    return ans;
}

int main(){

    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<vector<int>> vec = combine(n, k);

    for(auto it : vec)
    {
        for(auto jt : it){
            cout << jt << " ";
        }
        cout << endl;
    }

    return 0;
}