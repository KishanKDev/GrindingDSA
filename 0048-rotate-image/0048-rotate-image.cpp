class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size(); //since it is square mat

        // transpose karo aur phir Reverse kro each row ko
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }

};