class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int balance=0;

        for(auto ch:s){
            if(ch==')') balance--;
            
            if(balance>0) result+=ch;

            if(ch=='(') balance++;
            
        }

        return result;
    }
};