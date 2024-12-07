class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        auto canAchievePenalty = [&](int penalty) {
            int operations = 0;
            for (int num : nums) {
                operations += (num - 1) / penalty; // Number of splits needed for this bag
                if (operations > maxOperations) return false; // Early exit if operations exceed limit
            }
            return operations <= maxOperations;
        };

        int low = 1, high = *max_element(nums.begin(), nums.end());
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canAchievePenalty(mid)) {
                high = mid; // Try smaller penalty
            } else {
                low = mid + 1; // Increase penalty
            }
        }
        return low;
    }
};