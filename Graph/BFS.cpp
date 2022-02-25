#include<bits/stdc++.h>
using namespace std;

//using vector

void BFS(vector<int> adj[], int node, int vis[]){

    vector<int> ans;

    queue<int> que;
    que.push(node);
    vis[node] = 1;

    while(!que.empty()){
        int temp = que.front();
        que.pop();

        cout << temp << " ";

        for(auto it : adj[temp]){
            if(!vis[it]){
                que.push(it);
                vis[it] = 1;
            }
        }
    }
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> adj[n];

    for(int i = 0 ; i < m ; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int vis[n];
    memset(vis, 0, sizeof vis);

    for(int i = 0 ; i < n ; i++){
        if(!vis[i]){
            BFS(adj, i, vis);
        }
    }

	return 0;
}