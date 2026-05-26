class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> s(nums.size());
        int j=0;
        for(int i=0;i<n;i++){
           s[j]=nums[i];
           j+=2;
        }
        j=1;
        for(int i=n;i<nums.size();i++){
           s[j]=nums[i];
           j+=2;
        }
        return s;
    }
};