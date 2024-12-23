class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s = 0, e = n - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] > nums[mid + 1]) {
                // If the middle element is greater than the next, the peak lies on the left half
                e = mid;
            } else {
                // Otherwise, the peak lies on the right half
                s = mid + 1;
            }
        }

        // At the end of the loop, 's' and 'e' will converge to the peak element index
        return s;
    }
};

