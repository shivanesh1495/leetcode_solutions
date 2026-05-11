class Solution {
public:
    bool isSubsequence(string s, string t) {
        int f=0;
        for(int i=0;i<s.size();i++){
            bool fo=false;
            for(int j=f;j<t.size();j++){
                if(s[i]==t[j]){
                    f=j+1;
                    fo=true;
                    break;        
                }
            }
            if(!fo){
                return false;
            }
        }
        return true;
        
    }
};