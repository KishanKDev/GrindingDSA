class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n= prices.size();
       if (n < 2) return 0;

       int minprice=INT_MAX;
       int maxpro=0;
       for(int i=0;i<n;i++){
        minprice= min(minprice,prices[i]);
        maxpro=max(maxpro,prices[i]-minprice);
       } 
       return maxpro;
    }
};