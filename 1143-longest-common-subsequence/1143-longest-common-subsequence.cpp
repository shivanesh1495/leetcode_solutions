class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<char> v1,v2;
        v1.push_back(0);
        v2.push_back(0);
        for(char i : text1){
            v1.push_back(i);
        }
        for(char j : text2){
            v2.push_back(j);
        }

        vector<vector<int>> dp(v1.size(), vector<int>(v2.size()));

        for (int i = 0; i < v1.size(); i++) {
            dp[i][0] = 0;
        }
         for (int j = 0; j < v2.size(); j++) {
            dp[0][j] = 0;
        }

        for (int i = 1; i < v1.size(); i++) {
            for (int j = 1; j <v2.size(); j++) {

                if (v2[j]==v1[i]) {
                    dp[i][j] = 1+ dp[i - 1][j-1];
                } else {
                    dp[i][j] = max(dp[i - 1][j],dp[i][j -1]);
                }
            }
        }


        return dp[v1.size() - 1][v2.size()-1];
    }
};
        
