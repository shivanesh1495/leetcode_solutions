class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx=0,i=0;
        while(i<nums.size()){
            mx=max(mx,i+nums[i]);
            if(mx>=nums.size()-1){
                return true;
            }

            if(i==mx){
                return false;
            }
            i++;
        }


        return false;
        
    }

};