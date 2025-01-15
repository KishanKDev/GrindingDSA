class Solution {
public:
    int Expand(string s,int i,int j){
        int count=0;

        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int TotalCount=0;

        for(int i=0;i<s.length();i++){
            int j=i;
            int OddkaAns=Expand(s,i,j);

            j= i+1;
            int EvenkaAns= Expand(s,i,j);

            TotalCount=TotalCount+OddkaAns+EvenkaAns;
        }
        return TotalCount;
        
    }
};