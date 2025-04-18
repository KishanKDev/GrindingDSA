class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        int writeIndex =0;

        for(int readIndex=0;readIndex<s.length();readIndex++){
            if(s[readIndex]==')') count--;

            if(count>0){
                s[writeIndex]=s[readIndex];
                writeIndex++;
            }
            if(s[readIndex]=='(') count++;
        }
        s.resize(writeIndex);
        return s;
    }
};