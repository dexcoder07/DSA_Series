#include<bits/stdc++.h>
using namespace std;

bool checkforcycle(int s, vector<int> &visited, vector<int> adj[]){
	
	queue<pair<int,int>> q;
	visited[s] = 1;
	q.push({s, -1});
	
	while(!q.empty()){
		
		int node = q.front().first;
		int par = q.front().second;
		
		q.pop();
		
		for(auto it : adj[node]){
			if(!visited[it]){
				visited[it] = 1;
				q.push({it, node});
			}
			else{
				if(it != par){
					return true;
				}
			}
		}
	}
	
	return false;
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
	
	vector<int> visited(n+1, 0);
	
	if(checkforcycle(0, visited, adj)){
		cout << true;
	}
	else
	{
		cout << false;
	}
	return 0;
}