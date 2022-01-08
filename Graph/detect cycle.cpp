#include<bits/stdc++.h>
using namespace std;

bool undirect(vector<int> adj[], int node, vector<int> &visited){


    queue<pair<int,int>> pi;

    pi.push(make_pair(node, -1));
    visited[node] = 1;


    while(!pi.empty()){

        int child = pi.front().first;
        int par = pi.front().second;
        pi.pop();

        for(auto it : adj[child]){
            if(!visited[it]){
                visited[it] = 1;
                pi.push({it, child});
            }
            else{
                if(par != it){
                    return true;
                }
            }
        }
    }

    return false;
}
int main(){

    int vertices, edge;

    cin >> vertices >> edge;


    vector<int> adj[vertices+1];


    for(int i = 0 ; i < edge ; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int flag = 0;
    vector<int> visited(vertices+1, 0);

    for(int i = 0 ; i <= vertices ; i++){
        if(!visited[i]){
            if(undirect(adj, i, visited)){
                flag = 1;
            }
        }
    }

    if(flag == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}