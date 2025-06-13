class Solution {
    public int maxProfit(int[] prices) {
        int mini=0;
        int maxp=0;
        for(int i=0;i<prices.length;i++){
            if(prices[i]<prices[mini]){
                mini=i;
            }
            else{
                int p=prices[i]-prices[mini];
                if(p>maxp){
                    maxp=p;
                }
            }
        }
        return maxp;
    }
}