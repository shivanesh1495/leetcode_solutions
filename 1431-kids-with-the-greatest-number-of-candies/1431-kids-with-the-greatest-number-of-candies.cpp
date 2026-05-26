class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool> s;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxi){
                s.push_back(true);
            }
            else{
                s.push_back(false);
            }
        }
        return s;
    }
};