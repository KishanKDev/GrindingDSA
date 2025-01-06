class Solution {
public:
    int findPivotIndex(vector<int>& nums){
        int n= nums.size();
        int s=0, e=n-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            if(s==e) return s;
            if(mid+1<n && nums[mid]>nums[mid+1]) return mid;
            else if(mid-1>=0 && nums[mid]<nums[mid-1]) return mid-1;
            else if(nums[s]>nums[mid]){
                e= mid-1;
            }
            else{
                s= mid+1;
            }

        }
        return -1; 
    }

    int binarysearch(vector<int>& nums,int s, int e, int target){
        int n=nums.size();

        while(s<=e){
            int mid=s+ (e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s= mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return -1;
    } 
    int search(vector<int>& nums, int target) {
        int PivotIndex=findPivotIndex(nums);
        int n= nums.size();
        int ans=-1;
        if (n == 0) return -1;

        if(target>=nums[0] && target<=nums[PivotIndex] ){
            ans= binarysearch(nums,0,PivotIndex,target);
        }
        else{
            ans=binarysearch(nums,PivotIndex+1,n-1,target);
        }
        return ans;
    }
};