class Solution {
public:
    void helper(int low,int high,int curr,vector<int>&ans){
        if(curr>high){
            return;
        }
        if(curr>=low && curr<=high){
            ans.push_back(curr);
        }
        if(curr%10<9){
            helper(low,high,curr*10+(curr%10)+1,ans);
        }
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int i=1;i<=9;i++)
            helper(low,high,i,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
