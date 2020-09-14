class Solution {
public:
    int helper(vector<int>nums,int ind,int memo[]){
        if(ind<0){
            return 0;
        }
        if(memo[ind]!=-1){
            return memo[ind];
        }
        int a=nums[ind]+helper(nums,ind-2,memo);
        int b=helper(nums,ind-1,memo);
        
        memo[ind]=max(a,b);
        return memo[ind];
    }
    int rob(vector<int>& nums) {
        int memo[nums.size()];
        memset(memo,-1,sizeof(memo));
        return helper(nums,nums.size()-1,memo);
    }
    
};
