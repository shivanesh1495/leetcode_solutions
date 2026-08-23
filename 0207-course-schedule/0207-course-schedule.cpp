class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<int> visited(numCourses, 0);
        int co = 0;

        vector<vector<int>> adj(numCourses);

        for (int i = 0; i < prerequisites.size(); i++) {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        for (int i = 0; i < numCourses; i++) {
            if (visited[i] == 0) {

                if (DFS(co, i, adj, visited))
                    return false;
            }
        }

        if (co >= numCourses)
            return true;
        else
            return false;
    }

private:
    bool DFS(int &co, int node, vector<vector<int>>& adj,vector<int>& visited) {

        visited[node] = 1;   // currently in DFS
        co++;

        for (int v : adj[node]) {

            if (visited[v] == 0) {
                if (DFS(co, v, adj, visited))
                    return true;
            }

            else if (visited[v] == 1) {
                return true;     // cycle
            }
        }

        visited[node] = 2;       // DFS completed
        return false;
    }
};