class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
         int n = str1.size(), m = str2.size();
        int i = 0, j = 0;

        // Two-pointer approach
        while (i < n && j < m) {
            // Check if current character matches or can be incremented cyclically to match
            if (str1[i] == str2[j] || (str1[i] - 'a' + 1) % 26 + 'a' == str2[j]) {
                j++; // Move to next character in str2 if matched
            }
            i++; // Always move to next character in str1
        }

        // If all characters in str2 are matched
        return j == m;
        
    }
};