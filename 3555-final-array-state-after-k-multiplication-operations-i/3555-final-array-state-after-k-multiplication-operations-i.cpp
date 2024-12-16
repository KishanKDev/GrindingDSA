class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n= nums.size();
        
        for(int i=0;i<k;i++){
            auto minvalue=min_element(nums.begin(), nums.end()); 
            *minvalue *=multiplier;
        }
        return nums;
    }
};