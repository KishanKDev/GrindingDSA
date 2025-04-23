class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>list;

        unordered_map<int,int>mpp;
        int n=nums.size();
        int mini= (int)(n/3)+1;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;

            if(mpp[nums[i]]==mini){
                list.push_back(nums[i]);
                
            }
            if(list.size()==2) break;
        }

        return list;
        
    }
};