#include<bits/stdc++.h>
using namespace std;


int main(){

#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif


	vector<int> vec(8);
	int n = vec.size();

	fill_n(vec.begin(), n, 1L);

	for(auto it : vec){
		cout << it << " ";
	}
	return 0;
}