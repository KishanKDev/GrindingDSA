class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long result = 0;
        int n = nums.size();
        
        // Use multiset to maintain the range of current subarray
        multiset<int> window;
        
        int left = 0;
        for (int right = 0; right < n; right++) {
            // Add current element to the window
            window.insert(nums[right]);
            
            // Shrink the window from left side if the range exceeds 2
            while (!window.empty() && *window.rbegin() - *window.begin() > 2) {
                // Remove the leftmost element
                window.erase(window.find(nums[left]));
                left++;
            }
            
            // Add the number of continuous subarrays ending at the current right index
            result += right - left + 1;
        }
        
        return result;
        
    }
};