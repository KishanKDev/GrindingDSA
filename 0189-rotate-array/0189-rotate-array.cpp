class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        if (n == 0)
        return;
         k = k % n;
         if (k>n)

         return;


        //int temp[k]; 
       
        vector<int> temp(k);  // Corrected allocation size
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];  // Copy last k elements
        }

        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];  // Shift elements to the right
        }

        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];  // Place stored elements at front
        }

        // vector<int>ans(n);
        
        // for(int Index=0;Index<n;Index++){
        //     int NewIndex= (Index+k)% n;
        //     ans[NewIndex]=nums[Index];
        // }
        // nums= ans;
    }
};