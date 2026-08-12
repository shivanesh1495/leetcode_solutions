class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs = 0;
        int ms = INT_MIN;
        int t;
        for (int i = 0; i < nums.size(); i++) {
            t = cs + nums[i];
            if (t < nums[i]) {
                cs = nums[i];
            } else {
                cs = t;
            }

            if (ms < cs) {
                ms = cs;
            }
        }
        return ms;
    }
};