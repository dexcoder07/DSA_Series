#include<bits/stdc++.h>
using namespace std;

/*
// Approach 1
int mod = 100000007;
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    // Write your code hereint l, r;

    vector<int> ans;
    
    for(int i = 0 ; i < queries.size() ; i++){
        
        vector<long long> range = queries[i];
        long long l = range[0] - 1;
        long long r = range[1] - 1;
        
        long long sum = 0;
        
        for(long long j = l ; j <= r ; j++){
            int index = (int) (j % n);
            sum = (sum + arr[index]) % mod;
        }
        ans.push_back(sum % mod);
    }
    
    return ans;
}

*/

//Approach 2
int mod = 1000000007;
long long findSum(vector<long long> &sum, long long mxt, int n){

	long long count = (mxt / n) % mod;

	long long temp_sum = (count * sum[int(n)]) % n;

	temp_sum = (temp_sum + sum[(int)(mxt % n)]) % mod;

	return temp_sum;
}


vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {

	vector<long long> sum(n+1, 0);
	vector<int> ans;

	for(int i = 1 ; i <= n ; i++){
		sum[i] = sum[i-1] + arr[i-1];		//sum[next] = sum[prev] + arr[prev]; => sum[2] = sum[1] + arr[1];
	}

	for(int i = 0 ; i < queries.size() ; i++){

		vector<long long> range = queries[i];
		long long l = range[0];
		long long r = range[1];

		long long left_sum = findSum(sum, l-1, n);	//l-1 becoz l ko include karna hai
		long long right_sum = findSum(sum, r, n);

		ans.push_back((int)((right_sum - left_sum + mod) %mod));	//rsum - lsum + mod ka meaning hai agar value negative aata h to pure ko mod se + kar k positive bna denge means no -ve value should be there.
	}

	return ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("output1.txt", "wr", stdout);
#endif


	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		std::vector<int> v;

		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}

		int q;
		cin >> q;
		vector<vector<long long>> queries;

		while(q--){
			int l, r;
			cin >> l >> r;
			
			vector<long long> temp;
			temp.push_back(l);
			temp.push_back(r);
			queries.push_back(temp);
		}

		vector<int> ans = sumInRanges(v,n,queries,q);

		for(auto it : ans){
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}