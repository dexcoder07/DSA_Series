#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n;
	
	cin >> n;
	
	int k;
	
	cin >> k;
	
	vector<int> vec;
	
	for(int i = 0 ; i < n ; i++){
		int x;
		
		cin >> x;
		
		vec.emplace_back(x);
	}
	
	priority_queue<int, vector<int>, greater<int>> pq;
	
	for(int i = 0 ; i < n ; i++){
		pq.push(vec[i]);
		if(pq.size() > k){
			cout << pq.top() << " ";
			pq.pop();
		}
	}
	
	while(!pq.empty()){
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}