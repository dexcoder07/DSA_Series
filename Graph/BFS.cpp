#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n,m;
    
    cin >> n >> m;
    
    vector<int> adj[n+1];
    
    for(int i = 0 ; i < m ; i++){
        int u, v;
        
        cin >> u >> v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> vis(n+1,0);
    
    for(int i = 1 ; i <= n ; i++){
        if(vis[i] == 0){
            
            queue<int> que;
            que.push(i);
            vis[i] = 1;
            
            while(!que.empty()){
                int x = que.front();
                cout << x << " ";
                que.pop();
                
                for(auto it : adj[x]){
                    if(!vis[it]){           // Always check this condition ni to loop infinite ho jayega kyu ki element repeted enter hota rhega queue m.
                        que.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
    return 0;
}
