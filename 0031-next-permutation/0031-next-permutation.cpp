class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n=nums.size();

         int PivotIndex=-1;

         for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                PivotIndex = i;
                break;
            }
         }

         if(PivotIndex !=-1){
            for(int i=n-1;i>=PivotIndex;i--){
                if(nums[i]>nums[PivotIndex]){
                    swap(nums[i], nums[PivotIndex]);
                    break;

                }
            }
            
         }
         reverse(nums.begin()+PivotIndex+1, nums.end());



    }
};