class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
       
        // Phase 1: Detect the intersection point of the cycle
        int slow = nums[0];
        int fast = nums[0];

        while (true) {
            slow = nums[slow];       // Move slow pointer one step
            fast = nums[nums[fast]]; // Move fast pointer two steps
            if (slow == fast) {
                break; // Exit the loop when the two pointers meet
            }
        }

        // Phase 2: Find the entrance to the cycle (duplicate number)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow]; // Move both pointers one step
            fast = nums[fast];
        }

        return slow; // The duplicate number


    }
};