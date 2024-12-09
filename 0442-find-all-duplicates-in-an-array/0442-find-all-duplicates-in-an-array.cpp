class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n= nums.size();
        // vector<int>result;

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             result.push_back(nums[i]);
        //         }
        //     }
        // }
        // return result;


    
        vector<int> result;

        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1; // Map value to index (1-based to 0-based)

            // Check if the number at the index is already negative
            if (nums[index] < 0) {
                result.push_back(index + 1); // Duplicate found
            } else {
                // Mark the number as visited by making it negative
                nums[index] = -nums[index];
            }
        }

        return result;


    }
};