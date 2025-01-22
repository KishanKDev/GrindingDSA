class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
          int n= words.size();
          vector<int>ans;

          for(int i=0;i<n;i++){
             for(int j=0;j<words[i].length();j++){
                if(words[i][j]==x){
                    ans.push_back(i);
                    break;
                }
             }
            }

            return ans;
    }
};

// class Solution {
// public:
//     vector<int> findWordsContaining(vector<string>& words, char x) {
//         vector<int> ans;
        
//         for (int i = 0; i < words.size(); i++) {
//             if (words[i].find(x) != string::npos) { // Efficient check if 'x' is present
//                 ans.push_back(i);
//             }
//         }

//         return ans;
//     }
// };
