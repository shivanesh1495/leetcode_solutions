class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int si=nums.size();
        vector<int> s(2*si);
        for(int i=0;i<si;i++){
            s[i]=nums[i];
            s[si+i]=nums[i];
        }
        return s;
    }
};