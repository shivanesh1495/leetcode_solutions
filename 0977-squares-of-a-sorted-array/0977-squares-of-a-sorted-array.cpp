class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int b;
        for(int i=0;i<nums.size();i++){
            b=nums[i]*nums[i];
            nums[i]=b;
        }
        sort(nums.begin(),nums.end());
        return nums;

        
    }
};