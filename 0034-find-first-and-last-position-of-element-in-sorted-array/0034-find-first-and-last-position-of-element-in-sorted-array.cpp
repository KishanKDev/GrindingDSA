class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int>result={-1,-1};
      result[0]=firstOccur(nums,target);
      result[1]=lastOccur(nums,target);
      return result;
    }

    int firstOccur(vector<int>nums,int target){
        int n= nums.size();
        int start=0, end= n-1;
        int mid= start+(end-start)/2;
        int ans=-1;

        while(start<=end){
            if(target== nums[mid]){
                ans= mid;
                end= mid-1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else if(target<nums[mid]){
                end= mid-1;
            }
            mid= start +(end-start)/2;
        }
        return ans;
    }

    int lastOccur(vector<int>nums,int target){
        int n= nums.size();
        int start=0, end= n-1;
        int mid= start+(end-start)/2;
        int ans=-1;

        while(start<=end){
            if(target== nums[mid]){
                ans= mid;
                start= mid+1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else if(target<nums[mid]){
                end= mid-1;
            }
            mid= start +(end-start)/2;
        }
        return ans;
    }
};