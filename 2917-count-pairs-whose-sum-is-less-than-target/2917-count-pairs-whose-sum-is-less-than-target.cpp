class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        // int count=0;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]<target){
        //             count++;
        //         }

        //     }
        // }
        // return count;
        sort(nums.begin(),nums.end());
        int count=0;
        int left=0,right=n-1;

        while(left<right){
            if(nums[right]+nums[left]<target){
                count= count+ (right-left);
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
};