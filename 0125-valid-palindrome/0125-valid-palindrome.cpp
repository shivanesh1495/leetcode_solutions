class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                r+=tolower(s[i]);
            }
        }
        if(r.size()%2==0){
            string sr=r.substr(0, r.size()/2);
            string srr=r.substr(r.size()/2);
            reverse(srr.begin(),srr.end());
            if(sr==srr){
                return true;
            }

        }
        else{
            string sr=r.substr(0, (r.size()/2));
            string srr=r.substr(r.size()/2+1);
            reverse(srr.begin(),srr.end());
            if(sr==srr){
                return true;
            }

        }
        return false;        
    }
};