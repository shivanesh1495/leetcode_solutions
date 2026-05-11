class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        int j;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i]-0)<mini){
                mini=abs(nums[i]-0);
                j=i;
            }
            else if(abs(nums[i]-0)==mini){
                if(nums[i]>nums[j]){
                    j=i;
                }
            }
        }
        return nums[j];
    } 

};