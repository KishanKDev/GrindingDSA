class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        
        int result =0;

        for(int i=0;i<n;i++){
            int sum=nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[j-1]){
                    sum += nums[j];
                }
                else{
                    break;
                }
            
                
            }
            result= max(result,sum);
        }
        return result;
    }
};