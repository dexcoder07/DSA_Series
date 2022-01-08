#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &visited, vector<int> adj[], vector<int> &storedfs){
	
	storedfs.push_back(node);
	visited[node] = 1;
	
	for(auto it : adj[node]){
		if(!visited[it]){
			dfs(it, visited, adj, storedfs);
		}
	}
}

int main(){
	
	int n, m;
	
	cin >> n >> m;
	
	vector<int> adj[n+1];
	
	for(int i = 0 ; i < m ; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	vector<int> visited (n+1,0);
	vector<int> storedfs;
	
	for(int i = 0 ; i <=n ; i++){
		if(!visited[i]){
			dfs(i, visited, adj, storedfs);
		}
	}
	
	for(auto it : storedfs){
		cout << it << " ";
	}
	return 0;
}