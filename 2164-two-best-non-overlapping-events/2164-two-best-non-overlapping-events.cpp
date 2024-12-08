class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        // Sort events by end time
        sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int n = events.size();
        vector<int> dp(n, 0);
        int maxVal = 0, result = 0;

        // Precompute the maximum value up to each event
        for (int i = 0; i < n; ++i) {
            maxVal = max(maxVal, events[i][2]);
            dp[i] = maxVal;
        }

        // Find the maximum sum of values from two non-overlapping events
        for (int i = 0; i < n; ++i) {
            int start = events[i][0], end = events[i][1], value = events[i][2];

            // Binary search for the last non-overlapping event
            int low = 0, high = i - 1, idx = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (events[mid][1] < start) {
                    idx = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            if (idx != -1) {
                result = max(result, value + dp[idx]);
            } else {
                result = max(result, value);
            }
        }

        return result;
    }
};