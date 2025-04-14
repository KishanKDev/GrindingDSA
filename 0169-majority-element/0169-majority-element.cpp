class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        int element;

        for(int i=0;i<n;i++){
            if(count==0){
               count=1;
               element=nums[i];
            }
            else if(nums[i]==element){
               count++;
            }
            else{
               count--;
            }


        }
        int count1=0;
        for(int i=0;i<n;i++){
           if(nums[i]==element){
              count1++;
           }
    
        }

        if(count1>n/2){
           return element;
        }

        return -1;  
    }
    //\U0001f525 Analogy: Election Battle \U0001f3af
    //Socho tumhare paas ek line me log khade hain — kuch "Team A" ke supporter hain, kuch "Team B" ke.

    //Jab bhi Team A ka supporter milta hai, tumhare paas ek banda add ho jaata hai (count++).

    //Jab bhi Team B ka supporter milta hai, tumhara ek banda kam ho jaata hai (count--).

    //Agar equal number me A aur B mile, to sab cancel ho jaate hain.

    //⚠️ Lekin agar Team A ke log majority me hain, to end tak unke kuch log bach jaayenge. Wo bacha hua log majority element ko represent karta hai.
};