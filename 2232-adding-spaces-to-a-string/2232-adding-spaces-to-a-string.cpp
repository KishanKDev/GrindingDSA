class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int spaceIndex = 0;
        int n = spaces.size();

        for (int i = 0; i < s.size(); ++i) {
            // If the current index matches the next space index, add a space
            if (spaceIndex < n && i == spaces[spaceIndex]) {
                result += ' ';
                ++spaceIndex;
            }
            // Add the current character
            result += s[i];
        }

        return result;
    
        
    }
};