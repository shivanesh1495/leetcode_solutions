class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_multiset<char> an(s.begin(),s.end());
        if(s.size()!=t.size()){
            return false;
        }
        for(char a:t){
            auto it =an.find(a);
            if(it!=an.end()){
                an.erase(it);
            }
        }
        return an.empty();
        
    }
};