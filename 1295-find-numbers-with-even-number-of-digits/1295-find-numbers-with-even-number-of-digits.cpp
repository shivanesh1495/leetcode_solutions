class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int s=0;
        string t;
        for(int i=0;i<nums.size();i++){
            t=to_string(nums[i]);
            if(t.size()%2==0){
                s+=1;
            }
        }
        return s;
    }
};