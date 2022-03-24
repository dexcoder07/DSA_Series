#include<bits/stdc++.h>
using namespace std;





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