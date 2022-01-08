#include <iostream>
#include<vector>
using namespace std;
#include <limits.h>

// Number of vertices in the graph

int V = 2;
// function to find the vertex with minimum distance value

int minDistance(int dist[], bool visited[])
{


	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (visited[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;

	return min_index;
}

//print the constructed distance array
void printSolution(int dist[])
{
	cout <<"Vertex \t Distance from Source" << endl;
	for (int i = 0; i < V; i++)
		cout << i << " \t\t"<<dist[i]<< endl;
}


void dijkstra(vector<vector<int>> graph, int src)
{
	int dist[V]; // dist[i] contains shortestdistance from src to ith vertex

	bool visited[V]; // sptSet[i] will be true if vertex i is included in shortest
	// path tree or shortest distance from src to i is finalized

	// Initialize all distances as INFINITE and stpSet[] as false
	for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, visited[i] = false;

	// Distance of source vertex from itself is always 0
	dist[src] = 0;

	// Find shortest path for all vertices
	for (int count = 0; count < V - 1; count++) {
		
		int u = minDistance(dist, visited);

		// Mark the current vertex as visited
		visited[u] = true;

		// Update dist value of the adjacent vertices of the picked vertex.
		for (int v = 0; v < V; v++)

			// Update dist[v] only if is not in sptSet, there is an edge from
			// u to v, and total weight of path from src to v through u is
			// smaller than current value of dist[v]
			if (!visited[v] && graph[u][v] && dist[u] != INT_MAX
				&& dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}

	// print distance array
	printSolution(dist);
}


int main()
{
    int x;
    cin >> x;
    ::V = x;

    vector<vector<int>> graph( V , vector<int> (V, 0));

    for(int i  = 0 ; i < V ; i++){
        int u, v, wt;
        cin >> u >> v >> wt;

        graph[u][v] = wt;
        graph[v][u] = wt;
    }

	dijkstra(graph, 0);

	return 0;
}