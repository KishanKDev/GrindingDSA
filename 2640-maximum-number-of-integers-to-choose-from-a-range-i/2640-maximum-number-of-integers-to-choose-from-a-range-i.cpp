class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
      // Create a set of banned numbers for O(1) lookup
        unordered_set<int> bannedSet(banned.begin(), banned.end());
        
        // Sort banned numbers for optimization
        sort(banned.begin(), banned.end());
        
        // Track chosen count and current sum
        int count = 0;
        long long currentSum = 0;
        
        // Iterate through range 1 to n
        for (int i = 1; i <= n; i++) {
            // Skip if number is banned
            if (bannedSet.count(i)) continue;
            
            // Check if adding current number exceeds maxSum
            if (currentSum + i > maxSum) break;
            
            // Add number to sum and increment count
            currentSum += i;
            count++;
        }
        
        return count;  
    }
};