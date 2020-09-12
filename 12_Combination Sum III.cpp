class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>temp,int sum,int n,int ind){
        if(n==0 && sum==0){
            ans.push_back(temp);
            return ;
        }
        if(ind>sum || sum<0 || n<0){
            return ;
        }
        for(int i=ind;i<=9;i++){
            temp.push_back(i);
            dfs(temp,sum-i,n-1,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        dfs(temp,n,k,1);
        return ans;
    }
};
