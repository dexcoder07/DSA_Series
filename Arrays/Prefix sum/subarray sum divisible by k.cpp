#include<bits/stdc++.h>
using namespace std;


int subArrayCount(vector<int> &arr, int k){

	int counter = 0;

	for(int i = 0 ; i < arr.size() ; i++){
		int sum = 0;
		for(int j = i ; j < arr.size() ; j++){
			cout << arr[j] << " ";
			sum += arr[j];
			if(sum % k == 0){
				counter++;
			}
		}
		cout << endl;
	}

	return counter;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cin >> n;

	vector<int> arr;

	int k;
	cin >> k;

	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}

	cout << subArrayCount(arr, k);

	return 0;
}