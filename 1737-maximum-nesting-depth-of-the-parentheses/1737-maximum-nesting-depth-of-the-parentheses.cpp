class Solution {
public:
    int maxDepth(string s) {
        int OpenBrac=0;
        int maxdepth=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                OpenBrac++;

            }
            else if(s[i]==')'){
                OpenBrac--;
            }
            maxdepth =max(maxdepth,OpenBrac);
        }
        return maxdepth;
        
    }
};