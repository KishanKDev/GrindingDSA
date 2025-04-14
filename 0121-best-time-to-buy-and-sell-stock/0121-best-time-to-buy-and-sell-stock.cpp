class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n= prices.size();
       if (n < 2) return 0;

       int BestBuyprice=INT_MAX;
       int maxprofit=0;
       for(int i=0;i<n;i++){
        BestBuyprice= min(BestBuyprice,prices[i]);
        maxprofit=max(maxprofit,prices[i]-BestBuyprice);
       } 
       return maxprofit;
    }
};