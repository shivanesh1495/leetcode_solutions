class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> b;
        for(int i=1;i<=n;i++){
            b.push_back(i);
        }
        vector<vector<int>> a;
        vector<int> s;
        backtrack(b,a,s,0,k,n);
        return a;
        
    }

private :
    private:
    void backtrack(vector<int>& b, vector<vector<int>>& a, vector<int>& s, int start,int k ,int n) {
        if (s.size() == k) {
            a.push_back(s);
            return;  
        }
        for (int i = start; i < n ; i++) {
            s.push_back(b[i]);
            backtrack(b, a, s, i + 1 , k , n);
            s.pop_back();
        }
    }
};