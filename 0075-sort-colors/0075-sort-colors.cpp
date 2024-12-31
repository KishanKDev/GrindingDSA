class Solution {
public:
    void sortColors(vector<int>& nums) {
       int left = 0, right = nums.size() - 1;
       int index = 0;

         while (index <= right) {
        if (nums[index] == 0) {
            swap(nums[left], nums[index]);
            left++;
            index++;
        } else if (nums[index] == 2) {
            swap(nums[index], nums[right]);
            right--;
            // yahi to glti hogi apne se kyunki yaha index++ nhii krna h 
        } else { // nums[index] == 1
            index++;
        }

       } 
    }
};