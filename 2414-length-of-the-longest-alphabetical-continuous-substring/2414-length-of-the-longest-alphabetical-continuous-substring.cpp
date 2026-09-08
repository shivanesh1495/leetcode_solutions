class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 1;
        int maxi=1;        
        for(int i=0;i<s.size();i++){
            if(s[i]+1==s[i+1]){
                count++;
            }
            else{
                count=1;
            }
            maxi=max(count,maxi);
        }
        return maxi;
           
    }
};