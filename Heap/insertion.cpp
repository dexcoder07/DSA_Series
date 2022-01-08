#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	// Complexity - O(log n)
	
	vector<int> vec {30, 20, 15, 5, 10, 12, 6};
	
	vec.push_back(40);
	
	int child = vec.size() - 1;
	
	int parent = floor((child - 1)/2);
	
	while(parent < child){
	    if(parent < child){
	        swap(vec[parent], vec[child]);
	        child = parent;
	        parent = floor((child - 1)/2);
	    }
	}
	
	for(auto i: vec){
	    cout << i<< " ";
	}
	return 0;
}
