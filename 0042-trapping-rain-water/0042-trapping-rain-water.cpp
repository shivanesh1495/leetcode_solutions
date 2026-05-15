class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>l(n,0);
        vector<int>r(n,0);
        int lw=0;
        int rw=0;
        int j;
        for(int i=0;i<n;i++){
            j=n-i-1;
            l[i]=lw;;
            r[j]=rw;
            lw=max(lw,height[i]);
            rw=max(rw,height[j]);            
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int pot=min(l[i],r[i]);
            sum += max(0,pot-height[i]);
        }
        return sum;
        
    }
};