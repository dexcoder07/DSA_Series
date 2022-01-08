#include<bits/stdc++.h>
using namespace std;



bool bipartite(int node, vector<int> adj[], int color[]){
    if(color[node] == -1){
        color[node] = 0;
    }
    
    for(auto it : adj[node]){
        if(color[it] == -1){
            color[it] = 1 - color[node];
            if(!bipartite(it, adj, color)){
                return false;
            }
        }
        else
        {
            if(color[it] == color[node]){
                return false;
            }
        }
    }
    return true;
}

bool checkbipartite(vector<int> adj[], int n){
    
    int color[n+1];
    memset(color, -1, sizeof color);
    
    if(!bipartite(1, adj, color)){
        return false;
    }
    
    return true;
}



int main(){
    
    int E, N;
    
    cin >> N >> E;
    
    std::vector<int> adj[N+1];
    
    for(int i = 0 ; i < E ; i++){
        int u, v;
        
        cin >> u >> v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    
    if(checkbipartite(adj, N)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return  0;
}