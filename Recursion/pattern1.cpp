#include<bits/stdc++.h>
using namespace std;


void func(vector<int>& ar, vector<int>& ans,int i){

    if(i == ar.size()){
        cout << "[ ";
        for(auto it : ans){
            cout << it << " ";
        }
        cout << "] ";
        cout << endl;
        return;
    }
    ans.push_back(ar[i]);
    func(ar, ans, i+1);
    ans.pop_back();
    func(ar, ans, i+1);
}

int main(){

    vector<int> ar = {1,2,3};
    vector<int> ans;

    func(ar, ans, 0);
    return 0;
}