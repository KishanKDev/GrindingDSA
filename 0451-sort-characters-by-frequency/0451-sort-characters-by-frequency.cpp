class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;

        for(char ch:s){
            freq[ch]++;
        }

        vector<pair<int, char>> charFreq;

        for(auto entry:freq){
             charFreq.push_back({entry.second,entry.first});
        }

        sort(charFreq.rbegin(),charFreq.rend());

        string result;
        for(auto entry:charFreq){
            result.append(entry.first,entry.second);
        }

        return result;
    }
};