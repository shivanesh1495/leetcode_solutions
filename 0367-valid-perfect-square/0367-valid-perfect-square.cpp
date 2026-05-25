class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=0;
        long long r=num;
        while(l<=r){
            long long m=l+(r-l)/2;
            long long s=m*m;
            if(num==s){
                return true;
            }
            else if(s>num){
                r=m-1;
            }
            else if(s<num){
                l=m+1;
            }
        }
        return false;
    }
};