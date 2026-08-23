class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        
        int current = lower;
        int i = 0;
        
        while (current <= upper) {
            // Skip numbers that exist in nums
            while (i < nums.size() && nums[i] < current) {
                i++;
            }
            
            // If we've found a missing number
            if (i == nums.size() || nums[i] != current) {
                int start = current;
                // Find the end of the missing range
                while (current <= upper && (i == nums.size() || nums[i] != current)) {
                    current++;
                }
                // Add the range [start, current-1] as a pair
                result.push_back({start, current - 1});
            } else {
                // Current number exists in nums
                current++;
                i++;
            }
        }
        
        return result;
    }
};