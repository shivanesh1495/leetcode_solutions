class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> a;
        vector<int> s;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates,a,s,target,0);
        return a;
    }

private:
    void backtrack(vector<int>& candidates, vector<vector<int>>& a, vector<int>& s,int target, int start) {
        int sum=accumulate(s.begin(),s.end(),0);
        if (sum == target) {
            a.push_back(s); 
        }
         if (sum > target) {
            return;  
        }
        for (int i = start; i < candidates.size(); i++) {
            s.push_back(candidates[i]);
            backtrack(candidates, a, s, target, i);
            s.pop_back();
        }
    }
};