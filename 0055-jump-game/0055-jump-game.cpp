class Solution {
public:
    bool canJump(vector<int>& nums) {
       int maximum_reach=0;
       for(int i=0;i<nums.size();i++){
        if(i>maximum_reach){
            return false;
        }
        maximum_reach=max(maximum_reach,i+nums[i]);
       }
       return true;
    }
};