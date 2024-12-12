class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while (k-- > 0) {
        // Sort the gifts array in descending order
        sort(gifts.rbegin(), gifts.rend());

        // Take the top pile and update it
        gifts[0] = floor(sqrt(gifts[0]));
    }

    // Calculate the sum of all remaining gifts
    long long totalRemaining = 0;
    for (int i=0;i<gifts.size();i++) {
        totalRemaining += gifts[i];
    }

    return totalRemaining;
    }
};