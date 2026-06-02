class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> mh;
        for (int i : nums) {
            mh.push(i);
        }
        while(k!=1){
            mh.pop();
            k--;
        }
        return mh.top();

        
    }
};