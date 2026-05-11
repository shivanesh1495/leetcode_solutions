class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> r;
        vector<int> m;
        for(int i=0;i<nums.size();i++){
            if(i+1<nums.size() && nums[i]+1==nums[i+1]){
                if(m.empty()){
                    m.push_back(nums[i]);
                }
                continue;
            }
            else if(!m.empty()){
                m.push_back(nums[i]);
                r.push_back(to_string(m[0])+"->"+to_string(m[m.size()-1]));
                m.clear();
                continue;
            }
            else{
                r.push_back(to_string(nums[i]));
            }
        }
        return r;
    }
};