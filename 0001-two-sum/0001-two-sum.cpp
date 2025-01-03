class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        // for(int i=0;i<n;i++){
        // for(int j=i+1;j<n;j++){
        //     if(nums[i]+nums[j]==target){
        //         return {i,j};
        //     }
        // }
        // }
        // return {-1,-1};
        vector<pair<int, int>>indexnums;

        for(int i=0;i<n;i++){
            indexnums.push_back({nums[i],i});
        }

        sort(indexnums.begin(),indexnums.end());
        int low= 0;
        int high= n-1;

        while(low<high){
            int currsum=indexnums[low].first+indexnums[high].first;
            if(currsum==target){
                return {indexnums[low].second,indexnums[high].second};
            }
            else if(currsum>target){
                high--;
            }
            else{
                low++;
            }
        }
        return{-1,-1};
    }
};