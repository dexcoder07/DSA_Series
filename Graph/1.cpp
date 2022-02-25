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

//Undirected graph using adjacency matrix
    vector<vector<int>> arr(n+1, vector<int> (n+1,0));

    for(int i = 0 ; i < m ; i++){
        int u, v;
        cin >> u >> v;

        arr[u][v] = 1;
        arr[v][u] = 1;
    }
    
    for(int i = 0 ;  i <= n ; i++){
        for(int j = 0 ; j <= n ; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }


//Directed graph using adjacency matrix
    vector<vector<int>> ar2(n+1, vector<int> (n+1,0));

    for(int i = 0 ; i < m ; i++){
        int u, v;
        cin >> u >> v;

        ar2[u][v] = 1;
    }
    
    for(int i = 0 ;  i <= n ; i++){
        for(int j = 0 ; j <= n ; j++){
            cout << ar2[i][j];
        }
        cout << endl;
    }

//Graph With edges assigned

    vector<vector<int>> ar3(n+1, vector<int> (n+1,0));

    for(int i = 0 ; i < m ; i++){
        int u, v;
        cin >> u >> v >> w;

        arr[u][v] = w;
    }
    
    for(int i = 0 ;  i <= n ; i++){
        for(int j = 0 ; j <= n ; j++){
            cout << ar3[i][j];
        }
        cout << endl;
    }
	return 0;
}