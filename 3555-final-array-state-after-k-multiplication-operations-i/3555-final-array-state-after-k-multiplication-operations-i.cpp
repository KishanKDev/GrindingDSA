class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n= nums.size();
        while(k--){
        int minIndex=0;

        for(int i=0;i<n;i++){
            if(nums[i]<nums[minIndex]){
                minIndex=i;
            }
            
        }
        nums[minIndex] *= multiplier;
        
        // for(int i=0;i<k;i++){
        //     auto minvalue=min_element(nums.begin(), nums.end()); 
        //     *minvalue *=multiplier;
        // }
        }
        return nums;
    }
};