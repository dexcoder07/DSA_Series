#include<bits/stdc++.h>
using namespace std;


int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int m;
    cin >> m;


    //vector<int> adj[n+1];

/*

    for(int i = 0 ; i < n ; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    for(auto it : adj){
        for(auto jt : it){
            cout << jt << " ";
        }
    }

*/
// Graph with weight adjacency list

    vector<int> adj[n+1];
    
    for(int i = 0 ; i < m ; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1 ; i <= n ; i++){
        for(auto it : adj[i]){
            cout << it<< " ";
        }
        cout << endl;
    }


    return 0;
}