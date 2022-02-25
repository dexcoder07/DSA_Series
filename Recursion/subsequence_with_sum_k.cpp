#include<bits/stdc++.h>
using namespace std;


void sumK(vector<int> &arr,int s, int sum, int idx, vector<int> &ans){

	if(idx >= arr.size()){
		if(s == sum){
			for(auto it : ans){
				cout << it << " ";
			}
			cout << endl;
		}
		return;
	}


	ans.push_back(arr[idx]);
	s += arr[idx];
	sumK(arr, s, sum, idx+1, ans);

	ans.pop_back();
	s -= arr[idx];
	sumK(arr, s, sum, idx+1, ans);
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

    sumK(arr, 0, sum, 0, ans);

	return 0;
}