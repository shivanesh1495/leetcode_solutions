class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> js(jewels.begin(),jewels.end());
        int count=0;
        for(char i:stones){
            if(js.find(i)!=js.end()){
                count++;
            }
        } 
        return count;       
    }
};