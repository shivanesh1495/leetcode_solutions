class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> n;
        for(int num:nums){
            if(n.count(num)){
                return true;
            }
            n.insert(num);
        }
        return false;
    }
};