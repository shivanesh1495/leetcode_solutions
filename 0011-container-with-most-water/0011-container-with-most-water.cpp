class Solution {
public:
    int maxArea(vector<int>& height) {
        int ma=0;
        int n=height.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int h=min(height[i],height[j]);
            int w=j-i;
            ma=max(ma,h*w);
            if(height[i] < height[j]) {
                i++;
            }
            else {
                j--;
            }

        }
        return ma;
    }
};