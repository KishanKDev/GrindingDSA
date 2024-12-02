class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        // istringstream stream(sentence); // Split the sentence into words
        // string word;
        // int index = 0;

        // while (stream >> word) {
        //     index++;
        //     if (word.find(searchWord) == 0) { // Check if searchWord is a prefix
        //         return index;
        //     }
        // }
        // return -1; // Return -1 if no word matches
        
        
        int index = 0, wordStart = 0;
        int n = sentence.size(), m = searchWord.size();

        for (int i = 0; i <= n; ++i) {
            // Check for word boundaries
            if (i == n || sentence[i] == ' ') {
                index++;
                if (i - wordStart >= m && sentence.substr(wordStart, m) == searchWord) {
                    return index;
                }
                wordStart = i + 1; // Move to the start of the next word
            }
        
        
        }

        
        return -1;
    }
};

    
