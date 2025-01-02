class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        // if (n == 0)
        // return;
        //  k = k % n;
        //  if (k>n)

        //  return;


        // // int temp[k]; 
        // vector<int> temp(k);
        // for (int i = n - k; i < n; i++)
        // {
        //    temp[i - n + k] = nums[i];
        // }
        // for (int i = n - k - 1; i >= 0; i--)
        // {
        //    nums[i + k] = nums[i];
        // }
        // for (int i = 0; i < k; i++)
        // {
        //    nums[i] = temp[i];
        // }

        vector<int>ans(n);
        
        for(int Index=0;Index<n;Index++){
            int NewIndex= (Index+k)% n;
            ans[NewIndex]=nums[Index];
        }
        nums= ans;
    }
};