class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();

        stringstream ss(s);

        string word="";

        string result="";
        while(ss>>word){
            result = word+" "+result;
        }

        return result.substr(0,result.length()-1);

    }
};