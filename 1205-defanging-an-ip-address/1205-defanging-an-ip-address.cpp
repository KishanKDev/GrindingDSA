class Solution {
public:
    string defangIPaddr(string address) {
        string defanged;
        int n= address.length();
        for(int i=0;i<n;i++){
            if(address[i]=='.'){
                
                defanged.append("[.]");
            }
            else{
                defanged.push_back(address[i]);
            }
        }
        return defanged;
    }
};