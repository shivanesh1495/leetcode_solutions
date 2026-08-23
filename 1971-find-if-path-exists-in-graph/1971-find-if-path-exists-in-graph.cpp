class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {
        vector<vector<int>> adj(n);

        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<bool> visited(n, false);
        DFS(source, adj, visited);
        return visited[destination];

    }

private:
    void DFS(int node, vector<vector<int>>& adj,vector<bool>& visited) {
        visited[node] = true;
        for (int v : adj[node]) {
            if (!visited[v]) {
                DFS(v, adj, visited);
            }
        }
    }
};