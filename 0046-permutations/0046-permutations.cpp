class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> a;
        vector<int> s;
        vector<bool> used(nums.size(), false);  // Track used elements
        backtrack(nums, a, s, used);
        return a;
    }

private:
    void backtrack(vector<int>& nums, vector<vector<int>>& a, vector<int>& s, vector<bool>& used) {
        if (s.size() == nums.size()) {
            a.push_back(s);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {  // Always start from 0
            if (!used[i]) {  // Only use unused elements
                used[i] = true;
                s.push_back(nums[i]);
                backtrack(nums, a, s, used);
                s.pop_back();
                used[i] = false;
            }
        }
    }
};