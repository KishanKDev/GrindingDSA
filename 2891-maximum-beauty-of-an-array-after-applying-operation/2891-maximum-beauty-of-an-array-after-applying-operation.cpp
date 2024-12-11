class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        // Sort the array
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int maxBeauty = 0, left = 0;

    // Sliding window to find maximum range overlap
    for (int right = 0; right < n; ++right) {
        // Maintain valid range
        while (nums[right] - nums[left] > 2 * k) {
            left++;
        }
        // Update the maximum beauty (window size)
        maxBeauty = max(maxBeauty, right - left + 1);
    }

    return maxBeauty;
        
    }
};