class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();

        map<int,int>mpp;
        mpp[0]=1;
        int prefixSum=0;
        int count=0; 

        for(int i=0;i<n;i++) {
            prefixSum +=nums[i];
            int remove=prefixSum-k;
            count =count + mpp[remove];
            mpp[prefixSum]++;
        } 
        return count;      
    }
};