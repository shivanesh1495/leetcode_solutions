class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        // Count frequency
        for (int x : nums) {
            mp[x]++;
        }
        // Max Heap
        priority_queue<pair<int, int>> pq;
        // Push {frequency, number}
        for (auto x : mp) {
            pq.push({x.second, x.first});
        }
        vector<int> ans;
        // Get top k elements
        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};