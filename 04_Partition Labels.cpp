class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']=i;
        }
        vector<int>ans;
        int j=0,i,k=0;
        for(int i=0;i<s.size();i++){
            j=max(j,v[s[i]-'a']);
            if(i==j){
                // j=0;
                ans.push_back(i-k+1);
                k=i+1;
            }
        }
        return ans;
    }
};
