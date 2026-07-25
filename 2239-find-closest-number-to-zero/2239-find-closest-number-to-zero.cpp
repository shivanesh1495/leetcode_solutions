class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        int j;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])<mini){
                mini=abs(nums[i]);
                j=i;
            }
            else if(abs(nums[i])==mini){
                if(nums[i]>nums[j]){
                    j=i;
                }
            }
        }
        return nums[j];
    } 

};