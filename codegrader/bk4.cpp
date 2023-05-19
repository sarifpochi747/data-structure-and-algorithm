#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj(V);
    vector<int> black;
    vector<int> degree(V, 0);

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--; // adjust to 0-based indexing
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int u = 0; u < V; u++) {
        degree[u] = adj[u].size();
        if (degree[u] == 1) { // black node
            black.push_back(u);
        }
    }

    int num_black = black.size();

    vector<int> dist(V, -1);
    vector<int> parent(V, -1);
    queue<int> q;

    for (int b : black) {
        dist[b] = 0;
        q.push(b);
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) { // not visited yet
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    int min_dist = V+1;
    int best_white = -1;
    for (int u = 0; u < V; u++) {
        if (degree[u] > 1 && dist[u] != -1) { // white node connected to black nodes
            int d = 0;
            for (int v : black) {
                d += dist[v] - dist[u]; // path length from v to u
            }
            if (d < min_dist) {
                min_dist = d;
                best_white = u;
            }
        }
    }

    cout << num_black << endl;
    for (int b : black) {
        cout << b+1 << " "; // adjust to 1-based indexing for output
    }
    cout << endl << best_white+1 << endl;

    return 0;
}

