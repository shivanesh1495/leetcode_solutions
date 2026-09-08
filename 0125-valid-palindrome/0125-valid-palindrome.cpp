class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                r+=tolower(s[i]);
            }
        }
        string f=r;
        reverse(f.begin(),f.end());

        return f==r;
        
    }
};