class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        if(word1.size()>=word2.size()){
           int n=word1.size()-word2.size();
            if(n==0){
                for(int i=0;i<word1.size();i++){
                    s=s+word1[i];
                    s=s+word2[i];
                   
                }
            }
            else{
                for(int i=0;i<word1.size();i++){
                    if(i<word1.size()-n){
                        s=s+word1[i];
                        s=s+word2[i];
                    }
                    else{
                        s=s+word1[i];
                    }
                }
            }
        }
        else{
             int n = word2.size() - word1.size();
             for(int i=0;i<word2.size();i++){
                    if(i<word2.size()-n){
                        s=s+word1[i];
                        s=s+word2[i];
                    }
                    else{
                        s=s+word2[i];
                    }
                }

        }

        return s;
    }
};