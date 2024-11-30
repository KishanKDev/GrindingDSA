class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
      if (nums.empty()) return 0;
      int n= nums.size();

     
      int count=0;
      int longest=0;

      for(int i=0;i<n;i++){
        if(nums[i]==1){
           count++;
        }
        else{
            count=0;
        }
         longest= max(longest,count);
      }
     
      return longest;
    }
};