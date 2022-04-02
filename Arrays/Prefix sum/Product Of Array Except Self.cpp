#include<bits/stdc++.h>
using namespace std;

int mod = 100000007;
// Approach - 1 (TC = O(N^2) + O(N))


// int *getProductArrayExceptSelf(int *arr, int n)
// {
//     //Write your code here
//     int *ans = new int[n];
//     int m = 0;

//     //long long prod = 1;

//     for(int i = 0 ; i < n ; i++){
//     	long long prod = 1;
//     	for(int j = 0 ; j < n ; j++){
//     		if(j != i){
//     			prod = prod % mod;
//     			prod = (prod * (arr[j] % mod)) % mod;
//     		}
//     	}
//     	ans[i] = prod;
//     }

//     return ans;
// }


//Approach - 2
//using 2 arrays (one for prefix and one for suffix);

int multiply(int a, int b){

	long long ret = a % mod;
	ret = (ret * (b % mod)) % mod;

	return ret;
}

//TC = O(N), SC = O(N) for output array.
int *getarray(int *arr, int n){

	long long prod = 1;

	int *output = new int[n];

//O(N)
	for(int i = 0 ; i < n ; i++){
		output[i] = prod;
		prod = multiply(prod, arr[i]);
	}

//O(N)
	prod = 1;

	for(int i = n-1 ; i >=0 ; i--){
		output[i] = (output[i] * prod);
		prod = multiply(prod, arr[i]);
	}

	return output;
}



int main(){

#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int arr[n];

		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
		}

		int *x = getarray(arr, n);

		for (int i = 0; i < n; ++i)
		{
			/* code */
			cout << x[i] << " ";
		}
		cout << endl;

	}
	
	return 0;
}