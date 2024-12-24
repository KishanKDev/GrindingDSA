class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        // Binary search for the first occurrence
        int start = 0, end = nums.size() - 1, first = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                first = mid;
                end = mid - 1; // Continue searching in the left half
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // If target is not found
        if (first == -1) return ans;

        // Binary search for the last occurrence
        start = 0;
        end = nums.size() - 1;
        int last = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                last = mid;
                start = mid + 1; // Continue searching in the right half
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // Collect indices from first to last
        for (int i = first; i <= last; i++) {
            ans.push_back(i);
        }

        return ans;
    }
};
