#define ll long long int
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<pair<ll,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end());
        int i=0,j=1;
        while(j<v.size()){
            if(abs(v[i].first-v[j].first)>t && i!=j){
                i++;
            }
            else if(i==j || abs(v[i].second-v[j].second)>k){
                j++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
