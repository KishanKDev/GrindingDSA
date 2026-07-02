class Solution {
    public int[] recoverOrder(int[] order, int[] friends) {
        int n = order.length;
        int[] ans = new int[friends.length];
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<friends.length;j++){
                if(order[i]==friends[j]){
                    ans[count++]= order[i];

                }
            }
        }
         return ans;
        
    }
}