#include<bits/stdc++.h>
using namespace std;


int main(){

    int E, V;

    cin >> V >> E;

    vector<pair<int, int>> adj[V];

    for(int i = 0 ; i < E ; i++){
        int u, v, w;

        cin >> u >> v >> w;

        adj[u].push_back({v,w});
    }

    
    for(auto it : adj[0]){
        cout << it.first << endl << it.second <<endl;
    }
    return 0;
}