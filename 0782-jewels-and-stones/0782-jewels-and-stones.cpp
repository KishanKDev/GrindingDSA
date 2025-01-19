// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         int count=0;

//         for(int i=0;i<jewels.length();i++){
//             for(int j=0;j<stones.length();j++){
//                 if(stones[j]==jewels[i]){
//                     count++;
//                 }
//             }
            
//         }
//         return count;
//     }
// };

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int count = 0;

        for (char stone : stones) {
            if (jewelSet.count(stone)) {
                count++;
            }
        }

        return count;
    }
};
