class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        
        // Precompute parity violation prefix sum
        vector<int> prefixViolation(n + 1, 0);
        for (int i = 1; i < n; i++) {
            // Check if adjacent elements have same parity
            prefixViolation[i] = (nums[i] % 2 == nums[i-1] % 2);
            // Accumulate violations
            prefixViolation[i] += prefixViolation[i-1];
        }
        
        // Process queries
        vector<bool> answer;
        for (const auto& query : queries) {
            int from = query[0];
            int to = query[1];
            
            // Single-element subarray is always special
            if (from == to) {
                answer.push_back(true);
                continue;
            }
            
            // Check number of parity violations in the subarray
            int violations = prefixViolation[to] - prefixViolation[from];
            answer.push_back(violations == 0);
        }
        
        return answer;
    }
};