#include<bits/stdc++.h>
using namespace std;


bool bipartitebfs(int src, vector<int> adj[], int color[]){
    
    queue<int> q;
    q.push(src);
    color[src] = 1;
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for(auto it : adj[node]){
            if(color[it] == -1){
                q.push(it);
                color[it] = 1 - color[node];
            }
            else{
                if(color[it] == color[node]){
                    return false;
                }
            }
        }
    }
    
    return true;
}



bool checkbipartite(vector<int> adj[], int n){
    int color[n+1];
    memset(color, -1, sizeof color);
    if(!bipartitebfs(1, adj, color)){
        return false;
    }
/*    
    for(int i = 0 ; i < n ; i++){
        cout << i << endl;
    }*/
    return true;
}

int main(){
    
    int n, m;
    
    cin >> n >> m;
    
    std::vector<int> adj[n+1];
    
    for(int i = 0 ; i < m ; i++){
        
        int u, v;
        
        cin >> u >> v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    if(checkbipartite(adj, n)){
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}