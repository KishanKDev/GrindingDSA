class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.size();
        int i = 0, j = 0;

        // Traverse both strings
        while (i < n || j < n) {
            // Skip '_' in both strings
            while (i < n && start[i] == '_') i++;
            while (j < n && target[j] == '_') j++;

            // If one reaches the end but the other doesn't, return false
            if ((i < n) != (j < n)) return false;

            // If both pointers are valid, compare characters
            if (i < n && j < n) {
                if (start[i] != target[j]) return false; // Characters don't match

                // Check movement rules
                if (start[i] == 'L' && i < j) return false; // 'L' can only move left
                if (start[i] == 'R' && i > j) return false; // 'R' can only move right
            }
            
            i++;
            j++;
        }
        return true;
    }
};