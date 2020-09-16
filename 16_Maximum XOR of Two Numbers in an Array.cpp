class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int mask = 0, max = 0;
        for(int i = 31; i >= 0; i--) {
            mask = mask | (1 << i);
            set<int>sett;
            for(int num : nums)
                sett.insert(mask & num);
            
            int tmp = max | (1 << i);
            for(int prefix : sett) {
                if(sett.find(tmp ^ prefix)!=sett.end()) {
                    max = tmp;
                    break;
                }
            }
        }
        
        return max; 
    }
};
