#include<bits/stdc++.h>
using namespace std;


bool checkcycle(int node, vector<int> adj[], int visited[], int dfsV[]){

    visited[node] = 1;
    dfsV[node] = 1;

    for(auto it : adj[node]){
        if(!visited[it]){
            if(checkcycle(it, adj, visited, dfsV)){
                return true;
            }
        }
        else{
            if(dfsV[it] == 1){
                return true;
            }
        }
    }
    dfsV[node] = 0;
    return false;
}


bool iscycle(vector<int> adj[], int V){

    int visited[V+1];
    int dfsV[V+1];
    
    memset(visited, 0, sizeof visited);
    memset(dfsV, 0, sizeof dfsV);


    for(int i = 0 ; i <= V ; i++){
        if(!visited[i]){

            if(checkcycle(i, adj, visited, dfsV)){
                return true;
            }
        }
    }
    return false;
}


int main(){

    int E, V;

    cin >> V >> E;

    vector<int> adj[V+1];

    for(int i = 0 ; i < E ; i++){
        int u, v;

        cin >> u >> v;

        adj[u].push_back(v);
    }


    if(iscycle(adj, V)){
        cout << "True\n";
    }
    else{
        cout << "False\n";
    }

    return 0;
}