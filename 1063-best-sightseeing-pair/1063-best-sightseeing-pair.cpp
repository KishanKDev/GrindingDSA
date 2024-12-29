class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
    int maxScore = 0; 
    int maxPrev = values[0]; // Initializing maxPrev with the first value.

    for (int j = 1; j < values.size(); j++) {
        // Calculate the score for the current pair.
        maxScore = max(maxScore, maxPrev + values[j] - j);

        // Update maxPrev for the next iteration.
        maxPrev = max(maxPrev, values[j] + j);
    }

    return maxScore;
    }
};