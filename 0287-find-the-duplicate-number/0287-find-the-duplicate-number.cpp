class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 1 3 4 2 2
        // s
        //       2   ye isliye kyunki shuru me hi loop break na ho

        int slow =nums[0];
        int fast =nums[0];

        slow=nums[slow];
        fast = nums[nums[fast]];

        //Detect cycle
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }

        slow=nums[0];

        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast; //slow dono me se koi v
    }
};