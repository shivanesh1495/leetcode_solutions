class Solution {
public:
    int jump(vector<int>& nums) {
        int minhop=0;
        int far=0;
        int curend=0;
        for(int i=0;i<nums.size()-1;i++){
            far=max(far,i+nums[i]);

            if(i==curend){
                minhop++;
                curend=far;
            }         
        }
        return minhop;
    }
};