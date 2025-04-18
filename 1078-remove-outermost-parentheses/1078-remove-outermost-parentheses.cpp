class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count=0;

        for(auto ch:s){
            if(ch==')') count--;

            if(count>0) result +=ch;

            if(ch=='(') count++;
        }

        return result;
           
    }
};