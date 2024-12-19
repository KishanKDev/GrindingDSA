class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int maxChunks = 1; // At least one chunk is possible

        // Helper function to check if concatenating sorted chunks equals the sorted array
        auto isValidPartition = [&](const vector<int>& partitions) {
            vector<int> concatenated;
            int start = 0;
            for (int p : partitions) {
                vector<int> chunk(arr.begin() + start, arr.begin() + start + p);
                sort(chunk.begin(), chunk.end());
                concatenated.insert(concatenated.end(), chunk.begin(), chunk.end());
                start += p;
            }
            vector<int> sortedArr = arr;
            sort(sortedArr.begin(), sortedArr.end());
            return concatenated == sortedArr;
        };

        // Iterate over all possible partitions (2^n - 1 non-empty subsets of n)
        for (int mask = 1; mask < (1 << (n - 1)); ++mask) {
            vector<int> partitions;
            int count = 0;
            for (int i = 0; i < n; ++i) {
                ++count;
                if ((mask & (1 << i)) || i == n - 1) {
                    partitions.push_back(count);
                    count = 0;
                }
            }
            if (isValidPartition(partitions)) {
                maxChunks = max(maxChunks, (int)partitions.size());
            }
        }
        return maxChunks;
    }
};