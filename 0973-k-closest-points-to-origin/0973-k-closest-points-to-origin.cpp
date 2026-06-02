class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        unordered_map<int, int> mp;
        // Store distance
        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            mp[i] = x * x + y * y;
        }
        // Min Heap {distance, index}
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>pq;
        for (auto x : mp) {
            pq.push({x.second, x.first});
        }
        vector<vector<int>> ans;
        // Take k closest points
        while (k--) {
            int idx = pq.top().second;
            ans.push_back(points[idx]);
            pq.pop();
        }
        return ans;
    }
};