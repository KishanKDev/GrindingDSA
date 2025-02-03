class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;

        int maxlength=1;
        int CurrInc=1;
        int CurrDec=1;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                CurrInc++;
                CurrDec=1;
            }
            else if(nums[i]<nums[i-1]){
                CurrDec++;
                CurrInc=1;
            }
            else{
                CurrInc=1;
                CurrDec=1;
            }

            maxlength=max(maxlength,max(CurrInc,CurrDec));
        }
        return maxlength;
    }
};