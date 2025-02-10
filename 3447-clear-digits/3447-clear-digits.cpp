class Solution {
public:
    string clearDigits(string s) {
        while (true) {
        int digitIndex = -1;

        // Find the first digit
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                digitIndex = i;
                break;
            }
        }

        // If no digit is found, break the loop
        if (digitIndex == -1) break;

        // Find the closest non-digit to the left of digitIndex
        int removeIndex = -1;
        for (int i = digitIndex - 1; i >= 0; i--) {
            if (!isdigit(s[i])) {
                removeIndex = i;
                break;
            }
        }

        // Remove the digit and its closest non-digit character
        if (removeIndex != -1) {
            s.erase(removeIndex, 1);  // Remove non-digit
            digitIndex--;             // Adjust index after removal
        }
        s.erase(digitIndex, 1);       // Remove digit
    }

    return s;
        
    }
};