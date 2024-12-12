class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        // vector<bool>result;
        
        // for(int i=0;i<n;i++){
        //     candies[i] +=extraCandies;
        //     int maxelement= *std::max_element(candies.begin(),candies.end());

        //     if(maxelement==candies[i]){
        //         result.push_back(true);
        //     }
        //     else{
        //         result.push_back(false);
        //     }

        // }
        // return result;

        int maxCandies = *std::max_element(candies.begin(), candies.end());
        vector<bool> result;
        
        for (int i = 0; i < n; ++i) {
            if (candies[i] + extraCandies >= maxCandies) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};