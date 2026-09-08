class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> s1(s.begin(),s.end());
        vector<char> t1(t.begin(),t.end());

        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        if(s1==t1){
            return true;
        }

        return false;

        
    }
};