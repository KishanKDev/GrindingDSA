class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans;
       for(int row=1;row<=numRows;row++){
        long long res=1;
        vector<int>ansRow;
        ansRow.push_back(1);
        for(int col=1;col<row;col++){
            res=res*(row-col);
            res=res/col;
            ansRow.push_back(res);
        }
        ans.push_back(ansRow);
       }
       return ans;
    }   
};